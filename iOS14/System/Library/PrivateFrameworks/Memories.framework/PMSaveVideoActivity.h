/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <ShareSheet/UISaveToCameraRollActivity.h>

@class PHObjectPlaceholder;

@interface PMSaveVideoActivity : UISaveToCameraRollActivity {

	PHObjectPlaceholder* _placeholderForCreatedAsset;

}

@property (nonatomic,retain) PHObjectPlaceholder * placeholderForCreatedAsset;              //@synthesize placeholderForCreatedAsset=_placeholderForCreatedAsset - In the implementation block
-(id)activityType;
-(void)prepareWithActivityItems:(id)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedAsset;
-(void)setPlaceholderForCreatedAsset:(PHObjectPlaceholder *)arg1 ;
@end

