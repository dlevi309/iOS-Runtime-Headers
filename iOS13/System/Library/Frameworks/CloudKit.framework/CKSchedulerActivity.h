/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_xpc_object;
@class NSString, NSDate, CKContainer, CKContainerID, NSDictionary, NSObject;

@interface CKSchedulerActivity : NSObject {

	BOOL _shouldDefer;
	NSString* _identifier;
	long long _priority;
	unsigned long long _expectedTransferSizeBytes;
	NSDate* _earliestStartDate;
	CKContainer* _container;
	CKContainerID* _containerID;
	NSDictionary* _additionalXPCActivityCriteria;
	NSObject*<OS_xpc_object> _xpcActivity;

}

@property (nonatomic,retain) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                   //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) CKContainerID * containerID;                               //@synthesize containerID=_containerID - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalXPCActivityCriteria;                //@synthesize additionalXPCActivityCriteria=_additionalXPCActivityCriteria - In the implementation block
@property (assign,nonatomic) BOOL shouldDefer;                                          //@synthesize shouldDefer=_shouldDefer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;                      //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (assign,nonatomic) unsigned long long expectedTransferSizeBytes;              //@synthesize expectedTransferSizeBytes=_expectedTransferSizeBytes - In the implementation block
@property (nonatomic,copy) NSDate * earliestStartDate;                                  //@synthesize earliestStartDate=_earliestStartDate - In the implementation block
-(id)description;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)shouldDefer;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(CKContainerID *)containerID;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 priority:(long long)arg3 ;
-(void)setAdditionalXPCActivityCriteria:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalXPCActivityCriteria;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setShouldDefer:(BOOL)arg1 ;
-(NSDate *)earliestStartDate;
-(unsigned long long)expectedTransferSizeBytes;
-(id)initWithIdentifier:(id)arg1 containerID:(id)arg2 priority:(long long)arg3 ;
-(void)setExpectedTransferSizeBytes:(unsigned long long)arg1 ;
-(void)setEarliestStartDate:(NSDate *)arg1 ;
@end

