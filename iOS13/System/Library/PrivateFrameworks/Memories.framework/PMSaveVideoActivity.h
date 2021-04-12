/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <ShareSheet/UISaveToCameraRollActivity.h>

@class PHObjectPlaceholder;

@interface PMSaveVideoActivity : UISaveToCameraRollActivity {

	PHObjectPlaceholder* _placeholderForCreatedAsset;

}

@property (nonatomic,retain) PHObjectPlaceholder * placeholderForCreatedAsset;              //@synthesize placeholderForCreatedAsset=_placeholderForCreatedAsset - In the implementation block
-(id)activityType;
-(PHObjectPlaceholder *)placeholderForCreatedAsset;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setPlaceholderForCreatedAsset:(PHObjectPlaceholder *)arg1 ;
@end

