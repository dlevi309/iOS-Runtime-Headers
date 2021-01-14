/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUMetadataCacheDataProviderDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TUMetadataCacheDataProvider : NSObject {

	id<TUMetadataCacheDataProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _providerCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * providerCache;                                //@synthesize providerCache=_providerCache - In the implementation block
@property (assign,nonatomic,__weak) id<TUMetadataCacheDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)classIdentifier;
-(id)initWithQueue:(id)arg1 ;
-(void)refresh;
-(id)init;
-(id<TUMetadataCacheDataProviderDelegate>)delegate;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(void)setDelegate:(id<TUMetadataCacheDataProviderDelegate>)arg1 ;
-(id)description;
-(void)setObject:(id)arg1 forDestinationID:(id)arg2 ;
-(id)metadataForDestinationID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isEmpty;
-(NSMutableDictionary *)providerCache;
@end

