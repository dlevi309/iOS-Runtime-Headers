/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDictionary;

@interface MPStoreCompletionOfferResponse : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _itemsByVariant;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)mediaItemsWithStoreOfferVariant:(long long)arg1 ;
@end

