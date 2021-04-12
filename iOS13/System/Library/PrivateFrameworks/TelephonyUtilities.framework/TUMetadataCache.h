/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isEmpty;
-(NSArray *)providers;
-(id)initWithDataProviders:(id)arg1 ;
-(id)metadataForDestinationID:(id)arg1 ;
-(void)updateCacheWithDestinationIDs:(id)arg1 ;
-(void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1 ;
-(void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2 ;
-(id)initWithQueue:(id)arg1 dataProviders:(id)arg2 ;
-(void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(BOOL)arg2 ;
@end

