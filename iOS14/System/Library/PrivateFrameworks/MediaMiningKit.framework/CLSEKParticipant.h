/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface CLSEKParticipant : NSObject <NSCoding> {

	BOOL _isCurrentUser;
	long long _participantStatus;
	NSString* _emailAddress;
	NSString* _name;
	long long _participantType;
	NSURL* _URL;

}

@property (readonly) long long participantStatus;              //@synthesize participantStatus=_participantStatus - In the implementation block
@property (readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (readonly) NSString * emailAddress;                  //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isCurrentUser;                       //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (readonly) long long participantType;                //@synthesize participantType=_participantType - In the implementation block
-(BOOL)isCurrentUser;
-(NSString *)emailAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)participantType;
-(NSString *)name;
-(long long)participantStatus;
-(id)initWithEKParticipant:(id)arg1 ;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

