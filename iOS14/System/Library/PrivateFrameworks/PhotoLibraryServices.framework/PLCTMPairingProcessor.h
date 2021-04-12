/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLPairingProcessor.h>

@interface PLCTMPairingProcessor : PLPairingProcessor {

	BOOL _deferredProcessingNeeded;

}

@property (assign,nonatomic) BOOL deferredProcessingNeeded;              //@synthesize deferredProcessingNeeded=_deferredProcessingNeeded - In the implementation block
-(id)groupIDForAsset:(id)arg1 ;
-(id)firstGroupFromAssets:(id)arg1 ;
-(id)combinePair:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestForLibrary;
-(id)fetchRequestForSortedGroupIDs:(id)arg1 ;
-(id)ctmFetchRequestWithPredicate:(id)arg1 ;
-(void)setDeferredProcessingIfNescessaryForAsset:(id)arg1 ;
-(id)_mapResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id*)arg3 ;
-(BOOL)_copyResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id*)arg3 ;
-(void)_installSocResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 referencedResourceURLs:(id)arg3 ;
-(BOOL)deferredProcessingNeeded;
-(void)setDeferredProcessingNeeded:(BOOL)arg1 ;
@end

