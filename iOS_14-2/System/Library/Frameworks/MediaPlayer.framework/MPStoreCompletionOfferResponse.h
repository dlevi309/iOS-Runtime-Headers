/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mediaItemsWithStoreOfferVariant:(long long)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

