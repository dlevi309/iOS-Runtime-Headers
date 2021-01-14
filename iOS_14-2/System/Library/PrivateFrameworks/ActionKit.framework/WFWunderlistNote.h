/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDate, NSDictionary;

@interface WFWunderlistNote : MTLModel <MTLJSONSerializing> {

	long long _noteId;
	long long _taskId;
	NSString* _content;
	NSDate* _createdAt;
	NSDate* _updatedAt;
	long long _revision;

}

@property (nonatomic,readonly) long long noteId;                                 //@synthesize noteId=_noteId - In the implementation block
@property (nonatomic,readonly) long long taskId;                                 //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) NSString * content;                               //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                               //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) NSDate * updatedAt;                               //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,readonly) long long revision;                               //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)createdAtJSONTransformer;
+(id)updatedAtJSONTransformer;
-(NSDate *)createdAt;
-(NSString *)content;
-(long long)taskId;
-(long long)noteId;
-(NSDate *)updatedAt;
-(long long)revision;
@end

