/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/RETokenBuffer.h>

@protocol RETokenBuffer;
@class NSString, REScriptToken;

@interface REStandardizedTokenBuffer : NSObject <RETokenBuffer> {

	id<RETokenBuffer> _buffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
-(BOOL)isEmpty;
-(void)next;
-(REScriptToken *)currentToken;
-(void)_cleanTokens;
-(id)initWithTokenBuffer:(id)arg1 ;
@end

