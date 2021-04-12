/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSString, MPModelGenericObject, MPCPlayerSessionResponse, NSIndexPath;

@interface MPCPlayerSessionResponseItem : NSObject {

	NSString* _contentItemIdentifier;
	MPModelGenericObject* _metadataObject;
	MPCPlayerSessionResponse* _response;
	NSIndexPath* _indexPath;

}

@property (nonatomic,__weak,readonly) MPCPlayerSessionResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                 //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * contentItemIdentifier;                        //@synthesize contentItemIdentifier=_contentItemIdentifier - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;                   //@synthesize metadataObject=_metadataObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSIndexPath *)indexPath;
-(id)remove;
-(MPCPlayerSessionResponse *)response;
-(id)play;
-(MPModelGenericObject *)metadataObject;
-(id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3 ;
-(NSString *)contentItemIdentifier;
-(id)playOnPlayerPath:(id)arg1 ;
@end

