/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface W5Event : NSObject <NSCopying, NSSecureCoding> {

	long long _eventID;
	double _timestamp;
	NSDictionary* _info;

}

@property (assign,nonatomic) long long eventID;              //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) double timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)eventID;
-(NSDictionary *)info;
-(double)timestamp;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)dealloc;
-(void)setEventID:(long long)arg1 ;
@end

