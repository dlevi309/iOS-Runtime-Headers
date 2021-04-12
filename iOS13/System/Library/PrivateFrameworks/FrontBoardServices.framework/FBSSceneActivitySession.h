/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSSceneHandle, FBSProcess;
@class NSString, FBSProcessExecutionPolicy, FBSProcessAssertion, FBSProcessWatchdog;

@interface FBSSceneActivitySession : NSObject <BSDescriptionProviding> {

	NSString* _name;
	NSString* _identifier;
	id<FBSSceneHandle> _scene;
	FBSProcessExecutionPolicy* _executionPolicy;
	/*^block*/id _errorHandler;
	BOOL _open;
	BOOL _invalidated;
	id<FBSProcess> _process;
	FBSProcessAssertion* _assertion;
	FBSProcessWatchdog* _watchdog;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<FBSSceneHandle> scene;                        //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy) FBSProcessExecutionPolicy * executionPolicy;              //@synthesize executionPolicy=_executionPolicy - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (getter=isOpen,nonatomic,readonly) BOOL open;                              //@synthesize open=_open - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy) id errorHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(BOOL)open;
-(void)close;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(BOOL)isInvalidated;
-(BOOL)isOpen;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<FBSSceneHandle>)scene;
-(void)setScene:(id<FBSSceneHandle>)arg1 ;
-(BOOL)_isValid;
-(id)initWithName:(id)arg1 scene:(id)arg2 executionPolicy:(id)arg3 ;
-(FBSProcessExecutionPolicy *)executionPolicy;
-(void)setExecutionPolicy:(FBSProcessExecutionPolicy *)arg1 ;
@end

