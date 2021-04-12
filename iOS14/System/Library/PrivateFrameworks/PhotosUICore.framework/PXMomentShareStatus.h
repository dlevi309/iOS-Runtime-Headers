/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PXMutableMomentShareStatus.h>

@protocol PXDisplayMomentShare, PXDisplayAssetFetchResult, PXSectionedFetchResult;
@class PXCPLUIStatusProvider, NSString;

@interface PXMomentShareStatus : PXObservable <PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus> {

	PXCPLUIStatusProvider* _statusProvider;
	id<PXDisplayMomentShare> _momentShare;
	id<PXDisplayAssetFetchResult> _copyingAssetsFetchResult;
	id<PXDisplayAssetFetchResult> _copiedAssetsFetchResult;
	id<PXDisplayAssetFetchResult> _allAssetsFetchResult;
	id<PXSectionedFetchResult> _participantsFetchResult;

}

@property (nonatomic,readonly) id<PXDisplayMomentShare> momentShare;                                //@synthesize momentShare=_momentShare - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> copyingAssetsFetchResult;              //@synthesize copyingAssetsFetchResult=_copyingAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> copiedAssetsFetchResult;               //@synthesize copiedAssetsFetchResult=_copiedAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> allAssetsFetchResult;                  //@synthesize allAssetsFetchResult=_allAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) id<PXSectionedFetchResult> participantsFetchResult;                  //@synthesize participantsFetchResult=_participantsFetchResult - In the implementation block
@property (nonatomic,readonly) PXCPLUIStatusProvider * statusProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(id)owner;
-(id<PXDisplayAssetFetchResult>)allAssetsFetchResult;
-(id<PXDisplayAssetFetchResult>)copyingAssetsFetchResult;
-(void)setCopyingAssetsFetchResult:(id<PXDisplayAssetFetchResult>)arg1 ;
-(id<PXDisplayAssetFetchResult>)copiedAssetsFetchResult;
-(void)setCopiedAssetsFetchResult:(id<PXDisplayAssetFetchResult>)arg1 ;
-(void)setAllAssetsFetchResult:(id<PXDisplayAssetFetchResult>)arg1 ;
-(void)setParticipantsFetchResult:(id<PXSectionedFetchResult>)arg1 ;
-(NSString *)description;
-(PXCPLUIStatusProvider *)statusProvider;
-(id)initWithMomentShare:(id)arg1 ;
-(id<PXDisplayMomentShare>)momentShare;
-(id)_actionManager;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setMomentShare:(id<PXDisplayMomentShare>)arg1 ;
-(id<PXSectionedFetchResult>)participantsFetchResult;
@end

