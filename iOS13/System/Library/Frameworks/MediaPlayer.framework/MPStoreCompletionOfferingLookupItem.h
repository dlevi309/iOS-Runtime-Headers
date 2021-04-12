/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaQuery, NSNumber, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject {

	BOOL _wantsArtwork;
	MPMediaQuery* _albumItemsQuery;
	unsigned long long _tokenID;
	/*^block*/id _responseBlock;
	NSNumber* _storeLookupID;

}

@property (nonatomic,readonly) MPMediaQuery * albumItemsQuery;              //@synthesize albumItemsQuery=_albumItemsQuery - In the implementation block
@property (nonatomic,readonly) BOOL wantsArtwork;                           //@synthesize wantsArtwork=_wantsArtwork - In the implementation block
@property (nonatomic,readonly) unsigned long long tokenID;                  //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,copy,readonly) id responseBlock;                       //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,readonly) NSNumber * storeLookupID;                    //@synthesize storeLookupID=_storeLookupID - In the implementation block
@property (nonatomic,readonly) NSString * storeLookupIDString; 
+(id)storeLookupIDForAlbumItemsQuery:(id)arg1 ;
-(unsigned long long)tokenID;
-(id)responseBlock;
-(id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(BOOL)arg3 responseBlock:(/*^block*/id)arg4 ;
-(NSString *)storeLookupIDString;
-(id)lookupRequestForStorePlaylistIdentifier:(id)arg1 ;
-(id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1 ;
-(id)newLookupRequest;
-(id)_specificationForArtworkSizesToRequest;
-(MPMediaQuery *)albumItemsQuery;
-(BOOL)wantsArtwork;
-(NSNumber *)storeLookupID;
@end

