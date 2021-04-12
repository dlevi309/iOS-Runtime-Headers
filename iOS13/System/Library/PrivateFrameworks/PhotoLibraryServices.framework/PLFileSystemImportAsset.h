/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSSet *)urls;
-(BOOL)isCameraKit;
-(int)assetKind;
-(PLAssetJournalEntryPayload *)assetPayload;
-(NSObject*<PLAlbumProtocol>)destinationAlbum;
-(void)addURLs:(id)arg1 ;
-(void)addURL:(id)arg1 ;
-(id)initWithDestinationAlbum:(id)arg1 assetKind:(int)arg2 ;
-(id)initWithAssetPayload:(id)arg1 ;
-(void)setDestinationAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)setAssetKind:(int)arg1 ;
@end

