/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAlbumProtocol;
@class NSString, NSMutableSet, NSObject, PLAssetJournalEntryPayload, NSSet;

@interface PLFileSystemImportAsset : NSObject {

	NSString* _path;
	BOOL _pathContainsDCIM;
	NSMutableSet* _urls;
	int _assetKind;
	NSObject*<PLAlbumProtocol> _destinationAlbum;
	PLAssetJournalEntryPayload* _assetPayload;

}

@property (nonatomic,retain) NSObject*<PLAlbumProtocol> destinationAlbum;              //@synthesize destinationAlbum=_destinationAlbum - In the implementation block
@property (assign,nonatomic) int assetKind;                                            //@synthesize assetKind=_assetKind - In the implementation block
@property (nonatomic,readonly) NSSet * urls; 
@property (nonatomic,readonly) PLAssetJournalEntryPayload * assetPayload;              //@synthesize assetPayload=_assetPayload - In the implementation block
-(NSSet *)urls;
-(long long)compare:(id)arg1 ;
-(void)addURLs:(id)arg1 ;
-(void)addURL:(id)arg1 ;
-(id)description;
-(id)initWithDestinationAlbum:(id)arg1 assetKind:(int)arg2 ;
-(int)assetKind;
-(id)initWithAssetPayload:(id)arg1 ;
-(void)setAssetKind:(int)arg1 ;
-(BOOL)isCameraKit;
-(PLAssetJournalEntryPayload *)assetPayload;
-(NSObject*<PLAlbumProtocol>)destinationAlbum;
-(void)setDestinationAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
@end

