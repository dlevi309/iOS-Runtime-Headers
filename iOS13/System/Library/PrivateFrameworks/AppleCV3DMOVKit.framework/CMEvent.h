/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (assign) unsigned long long eventType;                      //@synthesize eventType=_eventType - In the implementation block
@property (assign) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * peerDisplayName;              //@synthesize peerDisplayName=_peerDisplayName - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(double)timestamp;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(unsigned long long)eventType;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)setPeerDisplayName:(NSString *)arg1 ;
-(NSString *)peerDisplayName;
@end

