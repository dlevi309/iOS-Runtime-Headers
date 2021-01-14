/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(BOOL)arg3 responseBlock:(/*^block*/id)arg4 ;
-(NSString *)storeLookupIDString;
-(id)newLookupRequest;
-(id)lookupRequestForStorePlaylistIdentifier:(id)arg1 ;
-(id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1 ;
-(id)responseBlock;
-(id)_specificationForArtworkSizesToRequest;
-(MPMediaQuery *)albumItemsQuery;
-(NSNumber *)storeLookupID;
-(BOOL)wantsArtwork;
@end

