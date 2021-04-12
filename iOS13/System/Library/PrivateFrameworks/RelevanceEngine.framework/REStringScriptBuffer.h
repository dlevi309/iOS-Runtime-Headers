/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REScriptBuffer.h>

@class NSString;

@interface REStringScriptBuffer : NSObject <REScriptBuffer> {

	NSString* _string;
	unsigned long long _index;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) unsigned short current; 
-(BOOL)isEmpty;
-(id)initWithString:(id)arg1 ;
-(void)next;
-(unsigned short)current;
-(id)contentForLine:(unsigned long long)arg1 ;
@end

