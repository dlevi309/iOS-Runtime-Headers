/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class HMHome, HFStaticItem, HFStaticItemProvider;

@interface HUFaceRecognitionItemModule : HFItemModule {

	HMHome* _home;
	HFStaticItem* _faceRecognitionCellItem;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HFStaticItem * faceRecognitionCellItem;                 //@synthesize faceRecognitionCellItem=_faceRecognitionCellItem - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;              //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(void)setFaceRecognitionCellItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)faceRecognitionCellItem;
@end

