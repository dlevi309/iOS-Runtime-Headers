/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXTilingLayoutInvalidationContext.h>

@class PXRelatedDataSource;

@interface PXRelatedTilingLayoutInvalidationContext : PXTilingLayoutInvalidationContext {

	PXRelatedDataSource* _fromDataSource;
	PXRelatedDataSource* _toDataSource;

}

@property (nonatomic,retain) PXRelatedDataSource * fromDataSource;              //@synthesize fromDataSource=_fromDataSource - In the implementation block
@property (nonatomic,retain) PXRelatedDataSource * toDataSource;                //@synthesize toDataSource=_toDataSource - In the implementation block
-(PXRelatedDataSource *)fromDataSource;
-(void)setFromDataSource:(PXRelatedDataSource *)arg1 ;
-(PXRelatedDataSource *)toDataSource;
-(void)setToDataSource:(PXRelatedDataSource *)arg1 ;
@end

