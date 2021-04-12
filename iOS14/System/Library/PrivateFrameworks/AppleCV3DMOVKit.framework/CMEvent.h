/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface CMEvent : NSObject <NSSecureCoding> {

	unsigned long long _eventType;
	double _timestamp;
	NSString* _peerDisplayName;
	NSUUID* _uuid;

}

@property (assign,nonatomic) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * peerDisplayName;                //@synthesize peerDisplayName=_peerDisplayName - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
-(NSUUID *)uuid;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setPeerDisplayName:(NSString *)arg1 ;
-(NSString *)peerDisplayName;
@end

