/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBSProcessInternal, OS_dispatch_queue, FBSProcessExecutionProvisionDelegate;
@class NSObject, NSError, NSString;

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying> {

	id<FBSProcessInternal> _process;
	BOOL _activated;
	NSObject*<OS_dispatch_queue> _delegateCalloutQueue;
	BOOL _monitoring;
	BOOL _violated;
	NSError* _error;
	id<FBSProcessExecutionProvisionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSProcessExecutionProvisionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcessInternal> process;                               //@synthesize process=_process - In the implementation block
@property (getter=isMonitoring,nonatomic,readonly) BOOL monitoring;                                 //@synthesize monitoring=_monitoring - In the implementation block
@property (getter=isViolated,nonatomic,readonly) BOOL violated;                                     //@synthesize violated=_violated - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FBSProcessExecutionProvisionDelegate>)delegate;
-(void)setDelegate:(id<FBSProcessExecutionProvisionDelegate>)arg1 ;
-(NSError *)error;
-(void)prepareForReuse;
-(id<FBSProcessInternal>)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)stopMonitoring;
-(BOOL)isMonitoring;
-(void)monitorProcess:(id)arg1 ;
-(void)_beginMonitoring;
-(void)_updateProgress;
-(void)_stopMonitoring;
-(void)_prepareForReuse;
-(void)_performDelegateCallout:(/*^block*/id)arg1 ;
-(BOOL)isViolated;
-(void)updateProgress;
-(void)_noteViolatedWithError:(id)arg1 ;
-(BOOL)isResourceProvision;
@end

