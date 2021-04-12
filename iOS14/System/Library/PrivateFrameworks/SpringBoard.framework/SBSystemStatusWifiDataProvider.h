/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class STWifiStatusDomainPublisher, NSString;

@interface SBSystemStatusWifiDataProvider : NSObject <BSInvalidatable> {

	BOOL _wifiActive;
	BOOL _fallingBackToCellular;
	STWifiStatusDomainPublisher* _wifiDataPublisher;
	void* _cellularFallbackWatcher;

}

@property (nonatomic,readonly) STWifiStatusDomainPublisher * wifiDataPublisher;                      //@synthesize wifiDataPublisher=_wifiDataPublisher - In the implementation block
@property (assign,getter=isWifiActive,nonatomic) BOOL wifiActive;                                    //@synthesize wifiActive=_wifiActive - In the implementation block
@property (assign,getter=isFallingBackToCellular,nonatomic) BOOL fallingBackToCellular;              //@synthesize fallingBackToCellular=_fallingBackToCellular - In the implementation block
@property (assign,nonatomic) void* cellularFallbackWatcher;                                          //@synthesize cellularFallbackWatcher=_cellularFallbackWatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_registerForNotifications;
-(id)init;
-(void)_updateData;
-(BOOL)isWifiActive;
-(void*)cellularFallbackWatcher;
-(BOOL)isFallingBackToCellular;
-(void)setFallingBackToCellular:(BOOL)arg1 ;
-(void)invalidate;
-(void)setWifiActive:(BOOL)arg1 ;
-(void)setCellularFallbackWatcher:(void*)arg1 ;
-(STWifiStatusDomainPublisher *)wifiDataPublisher;
-(void)_updateWifiActive;
-(void)dealloc;
@end

