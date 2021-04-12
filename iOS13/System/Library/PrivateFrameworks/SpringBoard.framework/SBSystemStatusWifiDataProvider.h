/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class STWifiStatusDomainPublisher, NSString;

@interface SBSystemStatusWifiDataProvider : NSObject <BSInvalidatable> {

	BOOL _wifiActive;
	BOOL _fallingBackToCellular;
	STWifiStatusDomainPublisher* _wifiDataPublisher;
	tcp_connection_fallback_watch_sRef _cellularFallbackWatcher;

}

@property (nonatomic,readonly) STWifiStatusDomainPublisher * wifiDataPublisher;                       //@synthesize wifiDataPublisher=_wifiDataPublisher - In the implementation block
@property (assign,getter=isWifiActive,nonatomic) BOOL wifiActive;                                     //@synthesize wifiActive=_wifiActive - In the implementation block
@property (assign,getter=isFallingBackToCellular,nonatomic) BOOL fallingBackToCellular;               //@synthesize fallingBackToCellular=_fallingBackToCellular - In the implementation block
@property (assign,nonatomic) tcp_connection_fallback_watch_sRef cellularFallbackWatcher;              //@synthesize cellularFallbackWatcher=_cellularFallbackWatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_updateData;
-(void)_registerForNotifications;
-(BOOL)isWifiActive;
-(void)setWifiActive:(BOOL)arg1 ;
-(tcp_connection_fallback_watch_sRef)cellularFallbackWatcher;
-(BOOL)isFallingBackToCellular;
-(void)setFallingBackToCellular:(BOOL)arg1 ;
-(void)_updateWifiActive;
-(void)setCellularFallbackWatcher:(tcp_connection_fallback_watch_sRef)arg1 ;
-(STWifiStatusDomainPublisher *)wifiDataPublisher;
@end

