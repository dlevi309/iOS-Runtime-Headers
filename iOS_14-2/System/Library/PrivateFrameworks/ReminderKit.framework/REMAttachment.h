/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class NSString, REMObjectID;

@interface REMAttachment : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding> {

	NSString* _uti;
	REMObjectID* _objectID;
	REMObjectID* _accountID;
	REMObjectID* _reminderID;

}

@property (nonatomic,readonly) REMObjectID * objectID;                 //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) REMObjectID * reminderID;               //@synthesize reminderID=_reminderID - In the implementation block
@property (nonatomic,readonly) NSString * uti;                         //@synthesize uti=_uti - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
-(NSString *)uti;
-(REMObjectID *)accountID;
-(REMObjectID *)remObjectID;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(REMObjectID *)objectID;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(id)initWithAttachment:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(REMObjectID *)reminderID;
@end

