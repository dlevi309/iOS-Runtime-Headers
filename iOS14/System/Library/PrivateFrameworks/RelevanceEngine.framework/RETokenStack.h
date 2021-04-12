/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REBacktrackingTokenBuffer.h>

@protocol RETokenBuffer;
@class NSMutableArray, REScriptToken, NSString;

@interface RETokenStack : NSObject <REBacktrackingTokenBuffer> {

	id<RETokenBuffer> _buffer;
	unsigned long long _position;
	NSMutableArray* _tokenStack;
	NSMutableArray* _positionStack;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pop;
-(void)next;
-(void)push;
-(REScriptToken *)currentToken;
-(void)consume;
-(BOOL)isEmpty;
-(id)initWithTokenBuffer:(id)arg1 ;
@end

