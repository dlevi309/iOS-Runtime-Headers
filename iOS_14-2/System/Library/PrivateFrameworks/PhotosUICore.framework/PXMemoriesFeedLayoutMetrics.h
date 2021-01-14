/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@class PXMemoriesSpec;

@interface PXMemoriesFeedLayoutMetrics : PXLayoutMetrics {

	PXMemoriesSpec* _spec;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) PXMemoriesSpec * spec;                   //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setSpec:(PXMemoriesSpec *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(PXMemoriesSpec *)spec;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

