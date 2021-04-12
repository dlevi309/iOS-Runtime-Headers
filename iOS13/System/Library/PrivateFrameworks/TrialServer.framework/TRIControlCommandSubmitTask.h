/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRIControlCommand.h>

@protocol TRITask;
@class NSNumber, NSString;

@interface TRIControlCommandSubmitTask : NSObject <TRIControlCommand> {

	id<TRITask> _task;
	NSNumber* _result;

}

@property (readonly) id<TRITask> task;                              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSNumber * result;                     //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)commandWithTask:(id)arg1 ;
-(BOOL)run;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)result;
-(void)setResult:(NSNumber *)arg1 ;
-(id<TRITask>)task;
-(id)initWithTask:(id)arg1 ;
@end

