/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TRITask;
@class NSNumber, NSDate, NSArray;

@interface TRITaskRecord : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _taskId;
	id<TRITask> _task;
	NSDate* _startDate;
	NSArray* _dependencies;
	NSArray* _tags;

}

@property (nonatomic,readonly) NSNumber * taskId;                   //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) id<TRITask> task;                    //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSArray * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                      //@synthesize tags=_tags - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)taskRecordWithTaskId:(id)arg1 task:(id)arg2 startDate:(id)arg3 dependencies:(id)arg4 tags:(id)arg5 ;
-(NSArray *)tags;
-(id<TRITask>)task;
-(id)init;
-(NSNumber *)taskId;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)dependencies;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithReplacementStartDate:(id)arg1 ;
-(id)initWithTaskId:(id)arg1 task:(id)arg2 startDate:(id)arg3 dependencies:(id)arg4 tags:(id)arg5 ;
-(BOOL)isEqualToTaskRecord:(id)arg1 ;
-(id)copyWithReplacementTaskId:(id)arg1 ;
-(id)copyWithReplacementTask:(id)arg1 ;
-(id)copyWithReplacementDependencies:(id)arg1 ;
-(id)copyWithReplacementTags:(id)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end

