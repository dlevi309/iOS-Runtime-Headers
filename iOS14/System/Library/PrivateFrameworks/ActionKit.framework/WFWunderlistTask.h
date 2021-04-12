/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDate, NSURL, NSDictionary;

@interface WFWunderlistTask : MTLModel <MTLJSONSerializing> {

	BOOL _starred;
	long long _taskId;
	NSString* _title;
	NSDate* _dueDate;
	long long _listId;
	long long _assigneeId;
	long long _assignerId;
	long long _createdById;
	NSDate* _createdAt;
	long long _revision;

}

@property (nonatomic,readonly) long long taskId;                                 //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL starred;                                     //@synthesize starred=_starred - In the implementation block
@property (nonatomic,readonly) NSDate * dueDate;                                 //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,readonly) long long listId;                                 //@synthesize listId=_listId - In the implementation block
@property (nonatomic,readonly) long long assigneeId;                             //@synthesize assigneeId=_assigneeId - In the implementation block
@property (nonatomic,readonly) long long assignerId;                             //@synthesize assignerId=_assignerId - In the implementation block
@property (nonatomic,readonly) long long createdById;                            //@synthesize createdById=_createdById - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                               //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) long long revision;                               //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) NSURL * webURL; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)dueDateJSONTransformer;
+(id)createdAtJSONTransformer;
+(id)starredJSONTransformer;
-(NSURL *)webURL;
-(NSDate *)createdAt;
-(NSDate *)dueDate;
-(long long)taskId;
-(long long)listId;
-(BOOL)starred;
-(NSString *)title;
-(long long)revision;
-(long long)assigneeId;
-(long long)assignerId;
-(long long)createdById;
@end

