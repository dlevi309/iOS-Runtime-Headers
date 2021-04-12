/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SHSignature, NSDate;

@interface SHMatcherRequest : NSObject <NSSecureCoding> {

	BOOL _sendNotifications;
	NSString* _installationID;
	SHSignature* _signature;
	NSDate* _deadline;
	NSString* _partnerName;
	long long _stopCondition;

}

@property (nonatomic,readonly) SHSignature * signature;                //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSDate * deadline;                      //@synthesize deadline=_deadline - In the implementation block
@property (nonatomic,readonly) BOOL hasHitDeadline; 
@property (nonatomic,readonly) NSString * partnerName;                 //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,readonly) NSString * installationID;              //@synthesize installationID=_installationID - In the implementation block
@property (nonatomic,readonly) BOOL sendNotifications;                 //@synthesize sendNotifications=_sendNotifications - In the implementation block
@property (nonatomic,readonly) long long stopCondition;                //@synthesize stopCondition=_stopCondition - In the implementation block
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)requestToMatchSignature:(id)arg1 forPartner:(id)arg2 installationID:(id)arg3 sendNotifications:(BOOL)arg4 ;
+(id)requestToMatchUntilDeadline:(id)arg1 forPartner:(id)arg2 sendNotifications:(BOOL)arg3 ;
+(id)requestOnceForPartner:(id)arg1 sendNotifications:(BOOL)arg2 ;
+(id)requestUntilMatchForPartner:(id)arg1 sendNotifications:(BOOL)arg2 ;
-(SHSignature *)signature;
-(NSDate *)deadline;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)partnerName;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSignature:(id)arg1 deadline:(id)arg2 partnerName:(id)arg3 installationID:(id)arg4 sendNotifications:(BOOL)arg5 stopCondition:(long long)arg6 ;
-(id)initWithSignature:(id)arg1 deadline:(id)arg2 partnerName:(id)arg3 sendNotifications:(BOOL)arg4 stopCondition:(long long)arg5 ;
-(NSString *)installationID;
-(BOOL)hasHitDeadline;
-(BOOL)sendNotifications;
-(long long)stopCondition;
@end

