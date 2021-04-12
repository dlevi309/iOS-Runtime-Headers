/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject {

	BOOL _preventStoreItemMetadataCaching;
	MPPropertySet* _requestedPropertySet;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;              //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (assign,nonatomic) BOOL preventStoreItemMetadataCaching;                //@synthesize preventStoreItemMetadataCaching=_preventStoreItemMetadataCaching - In the implementation block
+(id)allSupportedProperties;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
-(MPPropertySet *)requestedPropertySet;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 userIdentity:(id)arg2 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg1 userIdentity:(id)arg2 ;
-(BOOL)preventStoreItemMetadataCaching;
-(void)setPreventStoreItemMetadataCaching:(BOOL)arg1 ;
@end

