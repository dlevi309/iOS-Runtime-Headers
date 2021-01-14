/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTPairedDeviceObserver.h>
#import <libobjc.A.dylib/MTSyncStatusProvider.h>

@protocol MTSyncStatusProviderDelegate;
@class NSString;

@interface MTCompanionSyncStatusProvider : NSObject <MTPairedDeviceObserver, MTSyncStatusProvider> {

	id<MTSyncStatusProviderDelegate> _syncStatusProviderDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MTSyncStatusProviderDelegate> syncStatusProviderDelegate;              //@synthesize syncStatusProviderDelegate=_syncStatusProviderDelegate - In the implementation block
+(BOOL)deviceSupportsSyncing;
-(unsigned long long)syncStatus;
-(id<MTSyncStatusProviderDelegate>)syncStatusProviderDelegate;
-(id)init;
-(void)setSyncStatusProviderDelegate:(id<MTSyncStatusProviderDelegate>)arg1 ;
-(void)activePairedDeviceDidChange;
@end

