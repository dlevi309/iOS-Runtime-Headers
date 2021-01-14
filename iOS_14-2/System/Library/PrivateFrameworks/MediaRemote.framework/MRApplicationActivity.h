/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface MRApplicationActivity : NSObject <NSSecureCoding, NSMutableCopying, NSCopying> {

	NSUUID* _uniqueIdentifier;
	NSString* _primaryApplicationDisplayID;
	NSString* _secondaryApplicationDisplayID;
	int _status;
	int _creatorProcessID;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * primaryApplicationDisplayID;                //@synthesize primaryApplicationDisplayID=_primaryApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) NSString * secondaryApplicationDisplayID;              //@synthesize secondaryApplicationDisplayID=_secondaryApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) int status;                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) int creatorProcessID;                                  //@synthesize creatorProcessID=_creatorProcessID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)primaryApplicationDisplayID;
-(int)creatorProcessID;
-(id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)secondaryApplicationDisplayID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

