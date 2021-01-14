/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TUCallServicesClientCapabilitiesActions;
@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding> {

	BOOL _wantsCallDisconnectionOnInvalidation;
	BOOL _wantsCallStopStreamingOnInvalidation;
	BOOL _wantsFrequencyChangeNotifications;
	BOOL _wantsCallNotificationsDisabledWhileSuspended;
	id<TUCallServicesClientCapabilitiesActions> _delegate;

}

@property (assign,nonatomic,__weak) id<TUCallServicesClientCapabilitiesActions> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL wantsCallDisconnectionOnInvalidation;                                //@synthesize wantsCallDisconnectionOnInvalidation=_wantsCallDisconnectionOnInvalidation - In the implementation block
@property (assign,nonatomic) BOOL wantsCallStopStreamingOnInvalidation;                                //@synthesize wantsCallStopStreamingOnInvalidation=_wantsCallStopStreamingOnInvalidation - In the implementation block
@property (assign,nonatomic) BOOL wantsFrequencyChangeNotifications;                                   //@synthesize wantsFrequencyChangeNotifications=_wantsFrequencyChangeNotifications - In the implementation block
@property (assign,nonatomic) BOOL wantsCallNotificationsDisabledWhileSuspended;                        //@synthesize wantsCallNotificationsDisabledWhileSuspended=_wantsCallNotificationsDisabledWhileSuspended - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)wantsFrequencyChangeNotifications;
-(void)save;
-(id<TUCallServicesClientCapabilitiesActions>)delegate;
-(void)setWantsCallStopStreamingOnInvalidation:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setWantsCallDisconnectionOnInvalidation:(BOOL)arg1 ;
-(void)setDelegate:(id<TUCallServicesClientCapabilitiesActions>)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setWantsCallNotificationsDisabledWhileSuspended:(BOOL)arg1 ;
-(BOOL)wantsCallNotificationsDisabledWhileSuspended;
-(void)setWantsFrequencyChangeNotifications:(BOOL)arg1 ;
-(BOOL)wantsCallDisconnectionOnInvalidation;
-(BOOL)wantsCallStopStreamingOnInvalidation;
@end

