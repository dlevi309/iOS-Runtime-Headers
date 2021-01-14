/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSArray, NSURLRequest;

@interface MPStoreModelRequestConfiguration : NSObject {

	NSArray* _URLRequests;
	NSArray* _requestedItemIdentifiers;
	unsigned long long _itemMetadataRequestReason;
	long long _type;

}

@property (nonatomic,copy,readonly) NSURLRequest * URLRequest; 
@property (nonatomic,copy,readonly) NSArray * URLRequests;                                //@synthesize URLRequests=_URLRequests - In the implementation block
@property (nonatomic,readonly) NSArray * requestedItemIdentifiers;                        //@synthesize requestedItemIdentifiers=_requestedItemIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long itemMetadataRequestReason;              //@synthesize itemMetadataRequestReason=_itemMetadataRequestReason - In the implementation block
@property (nonatomic,readonly) long long type;                                            //@synthesize type=_type - In the implementation block
-(id)initWithURLRequest:(id)arg1 ;
-(long long)type;
-(NSArray *)URLRequests;
-(id)initWithURLRequests:(id)arg1 ;
-(id)initWithRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 ;
-(NSArray *)requestedItemIdentifiers;
-(unsigned long long)itemMetadataRequestReason;
-(NSURLRequest *)URLRequest;
@end

