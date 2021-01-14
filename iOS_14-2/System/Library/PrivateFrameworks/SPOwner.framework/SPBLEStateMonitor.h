/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol SPBLEStateMonitorDelegate;
@class CBCentralManager, NSString;

@interface SPBLEStateMonitor : NSObject <CBCentralManagerDelegate> {

	unsigned long long _bleState;
	id<SPBLEStateMonitorDelegate> _delegate;
	CBCentralManager* _centralManager;

}

@property (assign,nonatomic) unsigned long long bleState;                                //@synthesize bleState=_bleState - In the implementation block
@property (nonatomic,retain) CBCentralManager * centralManager;                          //@synthesize centralManager=_centralManager - In the implementation block
@property (assign,nonatomic,__weak) id<SPBLEStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(id)init;
-(id<SPBLEStateMonitorDelegate>)delegate;
-(void)startMonitoring;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(void)setBleState:(unsigned long long)arg1 ;
-(CBCentralManager *)centralManager;
-(void)setDelegate:(id<SPBLEStateMonitorDelegate>)arg1 ;
-(void)notifyDelegate:(unsigned long long)arg1 ;
-(unsigned long long)bleState;
@end

