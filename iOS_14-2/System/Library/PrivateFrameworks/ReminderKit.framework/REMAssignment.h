/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDAChangeTrackableFetchableModel.h>
#import <libobjc.A.dylib/REMDAChangedModelObjectResult.h>
#import <libobjc.A.dylib/_REMDAChangeTrackableModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class REMObjectID, NSDate, NSString;

@interface REMAssignment : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding> {

	BOOL __debug_cdAssigneeLinked;
	BOOL __debug_cdOriginatorLinked;
	long long _status;
	REMObjectID* _assigneeID;
	REMObjectID* _originatorID;
	REMObjectID* _objectID;
	REMObjectID* _accountID;
	REMObjectID* _reminderID;
	NSDate* _assignedDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) REMObjectID * objectID; 
@property (nonatomic,readonly) REMObjectID * accountID; 
@property (nonatomic,readonly) NSString * externalIdentifierForMarkedForDeletionObject; 
@property (nonatomic,copy) NSDate * assignedDate;                                                    //@synthesize assignedDate=_assignedDate - In the implementation block
@property (assign,nonatomic) BOOL _debug_cdAssigneeLinked;                                           //@synthesize _debug_cdAssigneeLinked=__debug_cdAssigneeLinked - In the implementation block
@property (assign,nonatomic) BOOL _debug_cdOriginatorLinked;                                         //@synthesize _debug_cdOriginatorLinked=__debug_cdOriginatorLinked - In the implementation block
@property (nonatomic,readonly) long long status;                                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) REMObjectID * assigneeID;                                             //@synthesize assigneeID=_assigneeID - In the implementation block
@property (nonatomic,readonly) REMObjectID * originatorID;                                           //@synthesize originatorID=_originatorID - In the implementation block
@property (nonatomic,readonly) REMObjectID * objectID;                                               //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;                                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) REMObjectID * reminderID;                                             //@synthesize reminderID=_reminderID - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(/*^block*/id)rem_DA_deletedKeyFromTombstoneBlock;
+(BOOL)rem_DA_supportsLazyDelete;
+(BOOL)rem_DA_supportsFetching;
+(id)rem_DA_lazyDeleteProperties;
+(id)objectIDWithUUID:(id)arg1 ;
+(/*^block*/id)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+(BOOL)isChangeTrackableModel;
+(/*^block*/id)rem_DA_fetchByObjectIDBlock;
+(id)cdEntityName;
+(id)nullifiedOriginatorAssignmentWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 assigneeID:(id)arg4 status:(long long)arg5 assignedDate:(id)arg6 ;
+(/*^block*/id)rem_DA_fetchByObjectIDsBlock;
+(BOOL)isChangeTrackableFetchableModel;
+(id)newObjectID;
+(double)orderValueWithAssignedDate:(id)arg1 objectIdentifier:(id)arg2 ;
-(REMObjectID *)accountID;
-(REMObjectID *)remObjectID;
-(void)encodeWithCoder:(id)arg1 ;
-(REMObjectID *)objectID;
-(BOOL)_debug_cdAssigneeLinked;
-(BOOL)_debug_cdOriginatorLinked;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 assigneeID:(id)arg4 originatorID:(id)arg5 status:(long long)arg6 assignedDate:(id)arg7 ;
-(BOOL)isEqualToAssignment:(id)arg1 ;
-(BOOL)isOriginatorNullified;
-(void)set_debug_cdAssigneeLinked:(BOOL)arg1 ;
-(void)set_debug_cdOriginatorLinked:(BOOL)arg1 ;
-(NSString *)description;
-(double)orderValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)originatorID;
-(NSDate *)assignedDate;
-(void)setAssignedDate:(NSDate *)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 assigneeID:(id)arg4 originatorID:(id)arg5 status:(long long)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(REMObjectID *)assigneeID;
-(REMObjectID *)reminderID;
@end

