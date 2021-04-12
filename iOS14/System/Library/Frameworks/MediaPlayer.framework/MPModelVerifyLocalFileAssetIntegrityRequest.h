/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPIdentifierSet, MPModelFileAsset;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject {

	MPIdentifierSet* _sourceItemIdentifiers;
	MPModelFileAsset* _fileAsset;

}

@property (nonatomic,retain) MPIdentifierSet * sourceItemIdentifiers;              //@synthesize sourceItemIdentifiers=_sourceItemIdentifiers - In the implementation block
@property (nonatomic,retain) MPModelFileAsset * fileAsset;                         //@synthesize fileAsset=_fileAsset - In the implementation block
+(id)_operationQueue;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelFileAsset *)fileAsset;
-(void)setFileAsset:(MPModelFileAsset *)arg1 ;
-(id)initWithFileAsset:(id)arg1 sourceItemIdentifiers:(id)arg2 ;
-(id)mediaLibraryForItemIdentifiers:(id)arg1 ;
-(MPIdentifierSet *)sourceItemIdentifiers;
-(void)setSourceItemIdentifiers:(MPIdentifierSet *)arg1 ;
@end

