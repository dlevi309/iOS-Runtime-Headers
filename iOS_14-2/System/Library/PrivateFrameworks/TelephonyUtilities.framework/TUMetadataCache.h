/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUMetadataCacheDataProviderDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate> {

	NSArray* _providers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * providers;                        //@synthesize providers=_providers - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classIdentifier;
-(NSArray *)providers;
-(void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1 ;
-(id)init;
-(void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(BOOL)arg2 ;
-(void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2 ;
-(NSString *)description;
-(id)metadataForDestinationID:(id)arg1 ;
-(void)updateCacheWithDestinationIDs:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 dataProviders:(id)arg2 ;
-(BOOL)isEmpty;
-(id)initWithDataProviders:(id)arg1 ;
@end

