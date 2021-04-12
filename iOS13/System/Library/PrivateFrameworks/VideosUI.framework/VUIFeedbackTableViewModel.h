/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUILabel, NSArray;

@interface VUIFeedbackTableViewModel : NSObject {

	VUILabel* _headerTextView;
	NSArray* _descriptionTextView;

}

@property (nonatomic,retain) VUILabel * headerTextView;                  //@synthesize headerTextView=_headerTextView - In the implementation block
@property (nonatomic,retain) NSArray * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
+(id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)descriptionTextViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
-(void)setHeaderTextView:(VUILabel *)arg1 ;
-(VUILabel *)headerTextView;
-(NSArray *)descriptionTextView;
-(void)setDescriptionTextView:(NSArray *)arg1 ;
@end

