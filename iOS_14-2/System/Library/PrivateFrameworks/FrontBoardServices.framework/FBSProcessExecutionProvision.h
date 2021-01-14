/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FBSProcessInternal>)process;
-(void)_updateProgress;
-(BOOL)isViolated;
-(void)_stopMonitoring;
-(id)succinctDescription;
-(void)stopMonitoring;
-(id)init;
-(id<FBSProcessExecutionProvisionDelegate>)delegate;
-(BOOL)isMonitoring;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_beginMonitoring;
-(void)prepareForReuse;
-(void)_prepareForReuse;
-(NSError *)error;
-(void)setDelegate:(id<FBSProcessExecutionProvisionDelegate>)arg1 ;
-(void)_performDelegateCallout:(/*^block*/id)arg1 ;
-(BOOL)isResourceProvision;
-(NSString *)description;
-(void)updateProgress;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)monitorProcess:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_noteViolatedWithError:(id)arg1 ;
@end

