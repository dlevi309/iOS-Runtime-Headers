/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSArray, NSString, NSNumber;

@interface CVAUserEvent : NSObject <NSSecureCoding> {

	unsigned long long _eventType;
	double _timestamp;
	NSUUID* _uuid;
	NSData* _anchorData;
	NSArray* _transformCameraToAnchor;
	NSString* _peerDisplayName;
	NSNumber* _sessionID;
	NSNumber* _movLowestTimestamp;

}

@property (assign,nonatomic) unsigned long long eventType;                   //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSData * anchorData;                            //@synthesize anchorData=_anchorData - In the implementation block
@property (nonatomic,retain) NSArray * transformCameraToAnchor;              //@synthesize transformCameraToAnchor=_transformCameraToAnchor - In the implementation block
@property (nonatomic,retain) NSString * peerDisplayName;                     //@synthesize peerDisplayName=_peerDisplayName - In the implementation block
@property (nonatomic,retain) NSNumber * sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSNumber * movLowestTimestamp;                  //@synthesize movLowestTimestamp=_movLowestTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)setEventType:(unsigned long long)arg1 ;
-(NSNumber *)sessionID;
-(void)setSessionID:(NSNumber *)arg1 ;
-(unsigned long long)eventType;
-(NSUUID *)uuid;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 timestamp:(double)arg2 ;
-(void)setPeerDisplayName:(NSString *)arg1 ;
-(void)setAnchorData:(NSData *)arg1 ;
-(NSData *)anchorData;
-(void)setMovLowestTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)movLowestTimestamp;
-(NSString *)peerDisplayName;
-(void)setTransformCameraToAnchor:(NSArray *)arg1 ;
-(NSArray *)transformCameraToAnchor;
@end

