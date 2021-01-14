/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKASMRosterProviderDecoratorBase.h>

@class NSMapTable;

@interface CRKASMTimeoutRosterProvider : CRKASMRosterProviderDecoratorBase {

	double _timeout;
	NSMapTable* _completionsByTimer;

}

@property (nonatomic,readonly) double timeout;                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSMapTable * completionsByTimer;              //@synthesize completionsByTimer=_completionsByTimer - In the implementation block
-(double)timeout;
-(void)dealloc;
-(void)createCourseWithProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)timeoutDidFire:(id)arg1 ;
-(id)initWithRosterProvider:(id)arg1 timeout:(double)arg2 ;
-(NSMapTable *)completionsByTimer;
-(id)scheduleTimeoutForCompletion:(/*^block*/id)arg1 ;
-(void)operationDidFinishWithTimer:(id)arg1 error:(id)arg2 ;
-(void)removeCourseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

