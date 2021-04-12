/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSString;

@interface MRApplicationActivity : NSObject <NSSecureCoding, NSMutableCopying> {

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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)status;
-(NSUUID *)uniqueIdentifier;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2 ;
-(NSString *)primaryApplicationDisplayID;
-(NSString *)secondaryApplicationDisplayID;
-(int)creatorProcessID;
@end

