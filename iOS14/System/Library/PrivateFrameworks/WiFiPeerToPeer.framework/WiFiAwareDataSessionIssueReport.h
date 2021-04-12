/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <WiFiPeerToPeer/WiFiPeerToPeer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface WiFiAwareDataSessionIssueReport : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _rtpSequenceNumber;
	NSNumber* _rtpStartTime;

}

@property (nonatomic,copy) NSNumber * rtpSequenceNumber;              //@synthesize rtpSequenceNumber=_rtpSequenceNumber - In the implementation block
@property (nonatomic,copy) NSNumber * rtpStartTime;                   //@synthesize rtpStartTime=_rtpStartTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)rtpSequenceNumber;
-(NSNumber *)rtpStartTime;
-(BOOL)rtpSequenceNumberEquals:(id)arg1 ;
-(BOOL)rtpStartTimeEquals:(id)arg1 ;
-(void)setRtpSequenceNumber:(NSNumber *)arg1 ;
-(void)setRtpStartTime:(NSNumber *)arg1 ;
@end

