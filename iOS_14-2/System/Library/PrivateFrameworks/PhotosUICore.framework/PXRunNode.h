/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXRunNode.h>
@class NSArray;


@protocol PXRunNode <NSObject>
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@required
-(BOOL)isComplete;
-(BOOL)isCanceled;
-(id<PXRunNodeDelegate>)delegate;
-(NSArray *)dependencies;
-(void)setDelegate:(id)arg1;
-(BOOL)isWaiting;
-(BOOL)isRunning;
-(unsigned long long)state;
-(void)cancel;

@end


@protocol PXRunNodeDelegate;
@class NSArray, PXRunNodeOperation, NSSet, NSLock, NSString;

@interface PXRunNode : NSObject <PXRunNode> {

	PXRunNodeOperation* _operation;
	NSArray* _dependencies;
	id<PXRunNodeDelegate> _delegate;
	NSSet* __dependencySet;
	NSLock* __operationLock;

}

@property (nonatomic,readonly) NSSet * _dependencySet;                           //@synthesize _dependencySet=__dependencySet - In the implementation block
@property (nonatomic,readonly) NSLock * _operationLock;                          //@synthesize _operationLock=__operationLock - In the implementation block
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dependencies;                      //@synthesize dependencies=_dependencies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)processGraphForRunNode:(id)arg1 withQualityOfService:(long long)arg2 ;
+(id)_defaultNodeRunnerWithQualityOfService:(long long)arg1 ;
+(void)processGraphForRunNode:(id)arg1 ;
-(BOOL)isComplete;
-(BOOL)isCanceled;
-(void)run;
-(void)completeWithError:(id)arg1 ;
-(id)init;
-(void)didCancel;
-(id<PXRunNodeDelegate>)delegate;
-(void)cancelWithError:(id)arg1 ;
-(NSArray *)dependencies;
-(void)setDelegate:(id<PXRunNodeDelegate>)arg1 ;
-(BOOL)complete;
-(BOOL)isWaiting;
-(id)initWithDependencies:(id)arg1 ;
-(id)newOperation;
-(void)_performChangesToOperation:(/*^block*/id)arg1 ;
-(NSSet *)_dependencySet;
-(NSLock *)_operationLock;
-(BOOL)isRunning;
-(unsigned long long)state;
-(void)cancel;
@end

