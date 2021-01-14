/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log, _CDContext;
@class NSObject, _CDContextualChangeRegistration, NSString;

@interface PowerUIWakeRequestSignalMonitor : NSObject <PowerUISignalMonitor> {

	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;
	id<_CDContext> _context;
	_CDContextualChangeRegistration* _registration;

}

@property (nonatomic,retain) id<PowerUISignalMonitorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                    //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_CDContext> context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _CDContextualChangeRegistration * registration;              //@synthesize registration=_registration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(unsigned long long)signalID;
-(_CDContextualChangeRegistration *)registration;
-(void)stopMonitoring;
-(void)setRegistration:(_CDContextualChangeRegistration *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(id<PowerUISignalMonitorDelegate>)delegate;
-(id)requiredFullChargeDate;
-(void)startMonitoring;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_CDContext>)context;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setContext:(id<_CDContext>)arg1 ;
-(id)nextUserVisibleWakeDate;
@end

