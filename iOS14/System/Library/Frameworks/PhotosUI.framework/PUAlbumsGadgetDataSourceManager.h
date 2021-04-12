/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class PXExtendedTraitCollection, PUSessionInfo, NSArray;

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager {

	PXExtendedTraitCollection* _traitCollection;
	PUSessionInfo* _sessionInfo;
	NSArray* _providers;

}

@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,readonly) NSArray * providers;                                      //@synthesize providers=_providers - In the implementation block
@property (nonatomic,readonly) PXExtendedTraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(NSArray *)providers;
-(PXExtendedTraitCollection *)traitCollection;
-(id)gadgetProviders;
-(id)initWithTraitCollection:(id)arg1 sessionInfo:(id)arg2 ;
-(PUSessionInfo *)sessionInfo;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
@end

