/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUCallProviderManagerDataSourceDelegate.h>

@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;
@class NSObject, NSMapTable, NSDictionary, TUCallProvider, NSArray, NSString;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate> {

	unsigned long long _type;
	NSObject*<OS_dispatch_queue> _queue;
	id<TUCallProviderManagerDataSource> _dataSource;
	NSMapTable* _delegateToQueue;

}

@property (nonatomic,readonly) unsigned long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUCallProviderManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * providersByIdentifier; 
@property (nonatomic,retain) NSMapTable * delegateToQueue;                                  //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (nonatomic,readonly) TUCallProvider * tinCanProvider; 
@property (nonatomic,readonly) TUCallProvider * defaultProvider; 
@property (nonatomic,readonly) TUCallProvider * emergencyProvider; 
@property (nonatomic,readonly) TUCallProvider * voicemailProvider; 
@property (nonatomic,readonly) TUCallProvider * telephonyProvider; 
@property (nonatomic,readonly) TUCallProvider * faceTimeProvider; 
@property (nonatomic,copy,readonly) NSArray * providers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProviders;
+(int)serviceForProvider:(id)arg1 video:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)debugDescription;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(id<TUCallProviderManagerDataSource>)dataSource;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(TUCallProvider *)telephonyProvider;
-(NSMapTable *)delegateToQueue;
-(void)setDelegateToQueue:(NSMapTable *)arg1 ;
-(TUCallProvider *)defaultProvider;
-(NSArray *)providers;
-(void)donateUserIntentForProviderWithIdentifier:(id)arg1 ;
-(void)providersChangedForDataSource:(id)arg1 ;
-(void)launchAppForDialRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)providersByIdentifier;
-(TUCallProvider *)faceTimeProvider;
-(id)initWithDataSource:(id)arg1 type:(unsigned long long)arg2 queue:(id)arg3 ;
-(id)providerWithIdentifier:(id)arg1 ;
-(id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1 ;
-(id)providersPassingTest:(/*^block*/id)arg1 ;
-(id)initWithLocalProviders;
-(id)initWithPairedHostDeviceProviders;
-(TUCallProvider *)voicemailProvider;
-(TUCallProvider *)tinCanProvider;
-(id)providerWithService:(int)arg1 video:(BOOL*)arg2 ;
-(TUCallProvider *)emergencyProvider;
-(id)providerForRecentCall:(id)arg1 ;
-(id)providerForFavoritesEntry:(id)arg1 ;
-(id)dialRequestForRecentCall:(id)arg1 ;
@end

