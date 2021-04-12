/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSNumber;

@interface REMChangeTombstone : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _objectIdentifier;
	NSString* _externalIdentifier;
	NSNumber* _daIsEventOnlyContainer;
	NSUUID* _shareeOwningListIdentifier;
	NSString* _shareeDisplayName;
	NSString* _shareeAddress;
	NSUUID* _assignmentOwningReminderIdentifier;

}

@property (nonatomic,readonly) NSUUID * objectIdentifier;                                //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * externalIdentifier;                            //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * daIsEventOnlyContainer;                        //@synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer - In the implementation block
@property (nonatomic,readonly) NSUUID * shareeOwningListIdentifier;                      //@synthesize shareeOwningListIdentifier=_shareeOwningListIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * shareeDisplayName;                             //@synthesize shareeDisplayName=_shareeDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * shareeAddress;                                 //@synthesize shareeAddress=_shareeAddress - In the implementation block
@property (nonatomic,readonly) NSUUID * assignmentOwningReminderIdentifier;              //@synthesize assignmentOwningReminderIdentifier=_assignmentOwningReminderIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)shareeOwningListIdentifier;
-(NSString *)shareeAddress;
-(NSUUID *)assignmentOwningReminderIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalIdentifier;
-(NSString *)shareeDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)objectIdentifier;
-(NSNumber *)daIsEventOnlyContainer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

