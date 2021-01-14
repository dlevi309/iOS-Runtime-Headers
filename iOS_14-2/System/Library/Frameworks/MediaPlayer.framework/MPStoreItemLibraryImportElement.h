/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject {

	long long _storeItemID;
	NSDictionary* _additionalTrackMetadata;

}

@property (nonatomic,readonly) long long storeItemID;                               //@synthesize storeItemID=_storeItemID - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalTrackMetadata;              //@synthesize additionalTrackMetadata=_additionalTrackMetadata - In the implementation block
-(long long)storeItemID;
-(id)storeItem;
-(id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2 ;
-(NSDictionary *)additionalTrackMetadata;
@end

