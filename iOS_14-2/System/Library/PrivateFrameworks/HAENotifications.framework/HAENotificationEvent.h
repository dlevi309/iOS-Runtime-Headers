/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/

#import <HAENotifications/HAENotifications-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval, NSDictionary, NSUUID;

@interface HAENotificationEvent : NSObject <NSSecureCoding, NSCopying> {

	unsigned eventType;
	double level;
	NSDateInterval* dateInterval;
	NSDictionary* metadata;
	NSUUID* uuid;

}

@property (nonatomic,readonly) double level; 
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) unsigned eventType; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) NSUUID * uuid; 
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(unsigned)eventType;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)level;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEventType:(unsigned)arg1 exposureLevel:(double)arg2 dateInterval:(id)arg3 metadata:(id)arg4 ;
-(id)getEventTypeString;
@end

