/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID, NSArray;

@interface REMListPredicateDescriptor : NSObject <NSSecureCoding> {

	long long _type;
	REMObjectID* _accountID;
	REMObjectID* _parentListID;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) REMObjectID * accountID;                 //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentListID;              //@synthesize parentListID=_parentListID - In the implementation block
@property (nonatomic,retain) NSArray * objectIDs;                     //@synthesize objectIDs=_objectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateDescriptorForAllLists;
-(REMObjectID *)accountID;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setObjectIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)objectIDs;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)parentListID;
-(void)setParentListID:(REMObjectID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

