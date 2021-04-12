/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/HFMediaServiceManagerObserver.h>

@protocol HUMediaServiceItemProviderDelegate;
@class NSMutableSet, HMHome, NSString;

@interface HUMediaServiceItemProvider : HFItemProvider <HFMediaServiceManagerObserver> {

	NSMutableSet* _items;
	HMHome* _home;
	id<HUMediaServiceItemProviderDelegate> _delegate;

}

@property (nonatomic,readonly) NSMutableSet * items;                                              //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HUMediaServiceItemProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)itemComparator;
-(void)mediaServicesDidUpdate:(id)arg1 ;
-(void)mediaServiceRemoved:(id)arg1 ;
-(void)defaultMediaServiceDidUpdate:(id)arg1 ;
-(void)mediaServiceDidUpdate:(id)arg1 ;
-(id<HUMediaServiceItemProviderDelegate>)delegate;
-(NSMutableSet *)items;
-(void)setDelegate:(id<HUMediaServiceItemProviderDelegate>)arg1 ;
-(id)reloadItems;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 ;
-(id)_fetchMediaServicesFuture;
-(void)_notifyMediaServicesUpdated;
@end

