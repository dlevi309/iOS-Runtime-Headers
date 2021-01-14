/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDataSectionManager.h>

@protocol PXOutlineDataSectionManagerDelegate;
@class NSDictionary;

@interface PXOutlineDataSectionManager : PXDataSectionManager {

	NSDictionary* _dataSectionManagersByDataSectionObjects;
	id<PXOutlineDataSectionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXOutlineDataSectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PXOutlineDataSectionManagerDelegate>)delegate;
-(void)setDelegate:(id<PXOutlineDataSectionManagerDelegate>)arg1 ;
-(id)createDataSection;
-(void)rearrangeSectionContent;
-(id)_changeDetailsForNewDataSection:(id)arg1 ;
-(id)childDataSectionManagerForOutlineObject:(id)arg1 ;
-(unsigned long long)childChangeDescriptorsInvalidatingDataSection;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2 ;
@end

