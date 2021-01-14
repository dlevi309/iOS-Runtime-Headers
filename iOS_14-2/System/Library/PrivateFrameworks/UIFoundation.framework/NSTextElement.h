/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {

	NSTextContentManager* _textContentManager;
	NSTextRange* _elementRange;

}

@property (__weak) NSTextContentManager * textContentManager; 
@property (retain) NSTextRange * elementRange;                             //@synthesize elementRange=_elementRange - In the implementation block
-(id)init;
-(NSTextRange *)elementRange;
-(NSTextContentManager *)textContentManager;
-(CGSize)estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg1 ;
-(void)setElementRange:(NSTextRange *)arg1 ;
-(void)setTextContentManager:(NSTextContentManager *)arg1 ;
-(id)initWithTextContentManager:(id)arg1 ;
-(void)dealloc;
@end

