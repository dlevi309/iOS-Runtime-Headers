/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {

	NSTextContentManager* _textContentManager;
	NSTextRange* _elementRange;

}

@property (__weak) NSTextContentManager * textContentManager; 
@property (retain) NSTextRange * elementRange;                             //@synthesize elementRange=_elementRange - In the implementation block
-(id)init;
-(void)dealloc;
-(NSTextRange *)elementRange;
-(NSTextContentManager *)textContentManager;
-(void)setTextContentManager:(NSTextContentManager *)arg1 ;
-(id)initWithTextContentManager:(id)arg1 ;
-(void)setElementRange:(NSTextRange *)arg1 ;
@end

