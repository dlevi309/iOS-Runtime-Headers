/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)remove;
-(NSIndexPath *)indexPath;
-(id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3 ;
-(id)play;
-(MPCPlayerSessionResponse *)response;
-(unsigned long long)hash;
-(NSString *)contentItemIdentifier;
-(MPModelGenericObject *)metadataObject;
-(BOOL)isEqual:(id)arg1 ;
-(id)playOnPlayerPath:(id)arg1 ;
@end

