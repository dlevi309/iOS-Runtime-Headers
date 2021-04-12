/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLPairingProcessor.h>

@interface PLCTMPairingProcessor : PLPairingProcessor
-(id)groupIDForAsset:(id)arg1 ;
-(id)firstGroupFromAssets:(id)arg1 ;
-(id)combinePairs:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestForLibrary;
-(id)fetchRequestForSortedGroupIDs:(id)arg1 ;
-(id)ctmFetchRequestWithPredicate:(id)arg1 ;
-(id)_mapResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id*)arg3 ;
-(BOOL)_copyResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id*)arg3 ;
-(void)_installSocResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 referencedResourceURLs:(id)arg3 ;
@end

