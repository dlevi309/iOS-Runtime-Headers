/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(REMObjectID *)accountID;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(NSArray *)objectIDs;
-(REMObjectID *)parentListID;
-(void)setParentListID:(REMObjectID *)arg1 ;
-(void)setObjectIDs:(NSArray *)arg1 ;
@end

