/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class NSMutableSet, NSString;

@interface VUIRentalManager : NSObject <MPStoreDownloadManagerObserver> {

	BOOL _needToSendPlaybackStartDatesToServer;
	NSMutableSet* _deferredRentalCheckinContexts;

}

@property (assign,nonatomic) BOOL needToSendPlaybackStartDatesToServer;                 //@synthesize needToSendPlaybackStartDatesToServer=_needToSendPlaybackStartDatesToServer - In the implementation block
@property (nonatomic,retain) NSMutableSet * deferredRentalCheckinContexts;              //@synthesize deferredRentalCheckinContexts=_deferredRentalCheckinContexts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)_activeAccountDidChange:(id)arg1 ;
-(void)_networkReachbilityDidChange:(id)arg1 ;
-(void)checkOutRentalWithID:(id)arg1 dsid:(id)arg2 checkoutType:(unsigned long long)arg3 startPlaybackClock:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)checkInRentalWithID:(id)arg1 dsid:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendPlaybackStartDatesToServerIfNecessary;
-(void)_checkInRentalsNeedingCheckIn;
-(void)_didFetchInitialDownloads:(id)arg1 ;
-(void)setNeedToSendPlaybackStartDatesToServer:(BOOL)arg1 ;
-(NSMutableSet *)deferredRentalCheckinContexts;
-(BOOL)needToSendPlaybackStartDatesToServer;
-(void)initializeRentals;
-(void)setDeferredRentalCheckinContexts:(NSMutableSet *)arg1 ;
@end

