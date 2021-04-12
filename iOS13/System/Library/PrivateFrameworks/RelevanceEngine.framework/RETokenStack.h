/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REBacktrackingTokenBuffer.h>

@protocol RETokenBuffer;
@class NSMutableArray, NSString, REScriptToken;

@interface RETokenStack : NSObject <REBacktrackingTokenBuffer> {

	id<RETokenBuffer> _buffer;
	unsigned long long _position;
	NSMutableArray* _tokenStack;
	NSMutableArray* _positionStack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
-(BOOL)isEmpty;
-(void)next;
-(void)pop;
-(void)consume;
-(REScriptToken *)currentToken;
-(void)push;
-(id)initWithTokenBuffer:(id)arg1 ;
@end

