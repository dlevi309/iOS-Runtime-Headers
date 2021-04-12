/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/RETokenBuffer.h>

@protocol RETokenBuffer;
@class REScriptToken, NSString;

@interface REStandardizedTokenBuffer : NSObject <RETokenBuffer> {

	id<RETokenBuffer> _buffer;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)next;
-(REScriptToken *)currentToken;
-(BOOL)isEmpty;
-(void)_cleanTokens;
-(id)initWithTokenBuffer:(id)arg1 ;
@end

