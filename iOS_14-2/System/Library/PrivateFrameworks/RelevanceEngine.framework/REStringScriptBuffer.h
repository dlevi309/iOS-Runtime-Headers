/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REScriptBuffer.h>

@class NSString;

@interface REStringScriptBuffer : NSObject <REScriptBuffer> {

	NSString* _string;
	unsigned long long _index;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) unsigned short current; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)next;
-(id)initWithString:(id)arg1 ;
-(unsigned short)current;
-(BOOL)isEmpty;
-(id)contentForLine:(unsigned long long)arg1 ;
@end

