/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2 ;
-(id)storeItem;
-(NSDictionary *)additionalTrackMetadata;
@end

