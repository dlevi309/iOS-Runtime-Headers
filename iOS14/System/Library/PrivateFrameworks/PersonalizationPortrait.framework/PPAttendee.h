/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPAttendee : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCurrentUser;
	unsigned char _status;
	NSString* _name;
	NSString* _emailAddress;
	NSString* _urlString;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * urlString;                 //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentUser;                   //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (nonatomic,readonly) unsigned char status;                 //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)urlString;
-(BOOL)isCurrentUser;
-(id)init;
-(NSString *)emailAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 urlString:(id)arg3 isCurrentUser:(BOOL)arg4 status:(unsigned char)arg5 ;
-(id)initWithEKParticipant:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToAttendee:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)status;
@end

