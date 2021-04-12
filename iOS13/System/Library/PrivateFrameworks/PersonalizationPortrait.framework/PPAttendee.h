/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)status;
-(NSString *)emailAddress;
-(BOOL)isCurrentUser;
-(NSString *)urlString;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 urlString:(id)arg3 isCurrentUser:(BOOL)arg4 status:(unsigned char)arg5 ;
-(id)initWithEKParticipant:(id)arg1 ;
-(BOOL)isEqualToAttendee:(id)arg1 ;
@end

