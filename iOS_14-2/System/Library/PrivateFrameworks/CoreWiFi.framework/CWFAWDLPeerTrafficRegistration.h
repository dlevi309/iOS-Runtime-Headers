/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CWFAWDLPeerTrafficRegistration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _active;
	int _sessionFlags;
	NSString* _serviceName;
	unsigned long long _desiredBandwidth;
	unsigned long long _desiredLatency;
	unsigned long long _preferredChannel;
	unsigned long long _secondaryPreferredChannel;
	NSArray* _peerContextList;

}

@property (nonatomic,copy) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                               //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int sessionFlags;                                          //@synthesize sessionFlags=_sessionFlags - In the implementation block
@property (assign,nonatomic) unsigned long long desiredBandwidth;                       //@synthesize desiredBandwidth=_desiredBandwidth - In the implementation block
@property (assign,nonatomic) unsigned long long desiredLatency;                         //@synthesize desiredLatency=_desiredLatency - In the implementation block
@property (assign,nonatomic) unsigned long long preferredChannel;                       //@synthesize preferredChannel=_preferredChannel - In the implementation block
@property (assign,nonatomic) unsigned long long secondaryPreferredChannel;              //@synthesize secondaryPreferredChannel=_secondaryPreferredChannel - In the implementation block
@property (nonatomic,copy) NSArray * peerContextList;                                   //@synthesize peerContextList=_peerContextList - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPreferredChannel:(unsigned long long)arg1 ;
-(unsigned long long)preferredChannel;
-(NSString *)serviceName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(int)sessionFlags;
-(void)setServiceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSessionFlags:(int)arg1 ;
-(unsigned long long)desiredBandwidth;
-(unsigned long long)desiredLatency;
-(unsigned long long)secondaryPreferredChannel;
-(NSArray *)peerContextList;
-(BOOL)isEqualToAWDLPeerTrafficRegistration:(id)arg1 ;
-(void)setDesiredBandwidth:(unsigned long long)arg1 ;
-(void)setDesiredLatency:(unsigned long long)arg1 ;
-(void)setSecondaryPreferredChannel:(unsigned long long)arg1 ;
-(void)setPeerContextList:(NSArray *)arg1 ;
@end

