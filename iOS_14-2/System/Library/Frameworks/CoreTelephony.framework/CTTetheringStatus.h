/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, CTDataConnectionAvailabilityStatus, CTDataConnectionStatus, CTXPCServiceSubscriptionContext;

@interface CTTetheringStatus : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _carrierEnabled;
	NSNumber* _userAuthenticated;
	NSNumber* _asserted;
	NSNumber* _activationFailure;
	NSNumber* _misPdpMaxHosts;
	CTDataConnectionAvailabilityStatus* _connectionAvailabilityStatus;
	CTDataConnectionStatus* _connectionStatus;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,retain) NSNumber * carrierEnabled;                                                      //@synthesize carrierEnabled=_carrierEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * userAuthenticated;                                                   //@synthesize userAuthenticated=_userAuthenticated - In the implementation block
@property (nonatomic,retain) NSNumber * asserted;                                                            //@synthesize asserted=_asserted - In the implementation block
@property (nonatomic,retain) NSNumber * activationFailure;                                                   //@synthesize activationFailure=_activationFailure - In the implementation block
@property (nonatomic,retain) NSNumber * misPdpMaxHosts;                                                      //@synthesize misPdpMaxHosts=_misPdpMaxHosts - In the implementation block
@property (nonatomic,retain) CTDataConnectionAvailabilityStatus * connectionAvailabilityStatus;              //@synthesize connectionAvailabilityStatus=_connectionAvailabilityStatus - In the implementation block
@property (nonatomic,retain) CTDataConnectionStatus * connectionStatus;                                      //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;                                      //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAsserted:(NSNumber *)arg1 ;
-(NSNumber *)misPdpMaxHosts;
-(void)setCarrierEnabled:(NSNumber *)arg1 ;
-(void)setConnectionStatus:(CTDataConnectionStatus *)arg1 ;
-(NSNumber *)carrierEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)activationFailure;
-(CTXPCServiceSubscriptionContext *)context;
-(id)description;
-(void)setMisPdpMaxHosts:(NSNumber *)arg1 ;
-(CTDataConnectionAvailabilityStatus *)connectionAvailabilityStatus;
-(NSNumber *)userAuthenticated;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserAuthenticated:(NSNumber *)arg1 ;
-(CTDataConnectionStatus *)connectionStatus;
-(NSNumber *)asserted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConnectionAvailabilityStatus:(CTDataConnectionAvailabilityStatus *)arg1 ;
-(void)setActivationFailure:(NSNumber *)arg1 ;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
@end

