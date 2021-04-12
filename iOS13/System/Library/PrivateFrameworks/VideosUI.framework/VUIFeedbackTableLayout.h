/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout;

@interface VUIFeedbackTableLayout : TVViewLayout {

	VUITextLayout* _headerTextLayout;
	VUITextLayout* _descriptionTextLayout;
	double _middleSpacing;

}

@property (nonatomic,readonly) VUITextLayout * headerTextLayout;                   //@synthesize headerTextLayout=_headerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * descriptionTextLayout;              //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,readonly) double middleSpacing;                               //@synthesize middleSpacing=_middleSpacing - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(void)_setupLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)headerTextLayout;
-(double)middleSpacing;
@end

