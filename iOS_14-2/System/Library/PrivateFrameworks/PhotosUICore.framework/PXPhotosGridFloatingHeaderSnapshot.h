/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXPhotosGridFloatingHeaderInfo.h>

@class NSAttributedString, PXAssetCollectionReference, NSString;

@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo> {

	NSAttributedString* _title;
	NSAttributedString* _subtitle;
	PXAssetCollectionReference* _assetCollectionReference;

}

@property (nonatomic,readonly) NSAttributedString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSAttributedString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (nonatomic,readonly) NSAttributedString * floatingSummaryTitle; 
@property (nonatomic,readonly) NSAttributedString * floatingSummarySubtitle; 
@property (nonatomic,readonly) BOOL floatingEnableOverview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXAssetCollectionReference *)assetCollectionReference;
-(NSAttributedString *)subtitle;
-(NSAttributedString *)floatingSummaryTitle;
-(NSAttributedString *)floatingSummarySubtitle;
-(BOOL)floatingEnableOverview;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetCollectionReference:(id)arg3 ;
-(NSAttributedString *)title;
@end

