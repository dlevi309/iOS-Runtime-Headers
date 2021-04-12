/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUReviewScrubberDataSource <NSObject>
@optional
-(unsigned long long)numberOfSectionsInReviewScrubber:(id)arg1;

@required
-(unsigned long long)reviewScrubber:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
-(BOOL)reviewScrubber:(id)arg1 shouldProvideFeedbackForCellAtIndexPath:(id)arg2;

@end

