/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TCSCallCenter, NSString, NSDate;

@interface TCSCall : NSObject <NSSecureCoding> {

	TCSCallCenter* _callCenter;
	BOOL _isNilCall;
	BOOL _isConnected;
	BOOL _isOutgoing;
	BOOL _isRemoteUplinkMuted;
	int _status;
	int _disconnectedReason;
	NSString* _contactIdentifier;
	NSString* _handleValue;
	NSString* _uniqueProxyIdentifier;
	NSDate* _dateAnsweredOrDialed;
	NSDate* _dateConnected;

}

@property (nonatomic,readonly) BOOL isConnected;                                   //@synthesize isConnected=_isConnected - In the implementation block
@property (nonatomic,readonly) BOOL isOutgoing;                                    //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (nonatomic,readonly) BOOL isIncoming; 
@property (nonatomic,readonly) BOOL isRemoteUplinkMuted;                           //@synthesize isRemoteUplinkMuted=_isRemoteUplinkMuted - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,copy,readonly) NSString * contactIdentifier;                  //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * handleValue;                        //@synthesize handleValue=_handleValue - In the implementation block
@property (nonatomic,readonly) int status;                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueProxyIdentifier;              //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (nonatomic,readonly) int disconnectedReason;                             //@synthesize disconnectedReason=_disconnectedReason - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateAnsweredOrDialed;                 //@synthesize dateAnsweredOrDialed=_dateAnsweredOrDialed - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateConnected;                        //@synthesize dateConnected=_dateConnected - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(int)status;
-(NSString *)contactIdentifier;
-(BOOL)isIncoming;
-(BOOL)isOutgoing;
-(BOOL)isConnected;
-(NSDate *)dateConnected;
-(NSString *)uniqueProxyIdentifier;
-(id)initWithCall:(id)arg1 ;
-(void)setCallCenter:(id)arg1 ;
-(BOOL)isRemoteUplinkMuted;
-(int)disconnectedReason;
-(BOOL)isEqualToCall:(id)arg1 ;
-(NSDate *)dateAnsweredOrDialed;
-(NSString *)handleValue;
-(void)setUplinkMuted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

