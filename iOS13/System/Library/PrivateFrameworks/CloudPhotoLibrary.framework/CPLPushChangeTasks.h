/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _tasksByType;
	NSMutableDictionary* _mutableTasksByType;

}

@property (nonatomic,readonly) BOOL hasTasks; 
+(BOOL)supportsSecureCoding;
+(id)descriptionForTaskType:(long long)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasTasks;
-(void)enumerateScopedTasksWithBlock:(/*^block*/id)arg1 ;
-(id)initEmpty;
-(void)_commitTasks;
-(void)enumerateTasksWithBlock:(/*^block*/id)arg1 ;
-(void)addTask:(long long)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(id)_descriptionFromTasksByType:(id)arg1 ;
-(id)invalidRecordScopedIdentifiers;
-(id)invalidRecordIdentifiers;
@end

