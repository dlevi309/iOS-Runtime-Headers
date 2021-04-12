/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSleepModeManager.h>

@protocol MTSleepModeManager <NSObject>
@property (nonatomic,readonly) BOOL isEnabled; 
@required
-(BOOL)isEnabled;

@end


@class NSString;

@interface MTSleepModeManager : NSObject <MTSleepModeManager> {

	BOOL _enabled;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reconnect;
-(void)checkIn;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isEnabled;
-(id)initWithDelegate:(id)arg1 isSynchronous:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg1 valueDidChangeBlock:(/*^block*/id)arg2 ;
@end

