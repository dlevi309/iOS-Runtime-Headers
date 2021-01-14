/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSString, NSDate, CKContainer, CKContainerID, NSObject, NSDictionary;

@interface CKSchedulerActivity : NSObject <NSCopying> {

	BOOL _shouldDefer;
	BOOL _userRequestedBackupTask;
	NSString* _identifier;
	long long _priority;
	unsigned long long _expectedTransferSizeBytes;
	NSDate* _earliestStartDate;
	CKContainer* _container;
	CKContainerID* _containerID;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSDictionary* _additionalXPCActivityCriteria;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                   //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;                                 //@synthesize containerID=_containerID - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL userRequestedBackupTask;                              //@synthesize userRequestedBackupTask=_userRequestedBackupTask - In the implementation block
@property (assign,nonatomic) BOOL shouldDefer;                                          //@synthesize shouldDefer=_shouldDefer - In the implementation block
@property (nonatomic,readonly) CKContainer * nullableContainer; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;                      //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalXPCActivityCriteria;                //@synthesize additionalXPCActivityCriteria=_additionalXPCActivityCriteria - In the implementation block
@property (assign,nonatomic) unsigned long long expectedTransferSizeBytes;              //@synthesize expectedTransferSizeBytes=_expectedTransferSizeBytes - In the implementation block
@property (nonatomic,copy) NSDate * earliestStartDate;                                  //@synthesize earliestStartDate=_earliestStartDate - In the implementation block
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(BOOL)shouldDefer;
-(CKContainerID *)containerID;
-(NSDate *)earliestStartDate;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 containerID:(id)arg3 priority:(long long)arg4 ;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setEarliestStartDate:(NSDate *)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)description;
-(void)setShouldDefer:(BOOL)arg1 ;
-(unsigned long long)expectedTransferSizeBytes;
-(BOOL)userRequestedBackupTask;
-(NSDictionary *)additionalXPCActivityCriteria;
-(void)setExpectedTransferSizeBytes:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 containerID:(id)arg2 priority:(long long)arg3 ;
-(void)setUserRequestedBackupTask:(BOOL)arg1 ;
-(CKContainer *)nullableContainer;
-(void)setAdditionalXPCActivityCriteria:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 priority:(long long)arg3 ;
-(long long)priority;
-(CKContainer *)container;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
@end

