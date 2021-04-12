/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <Foundation/NSBlockOperation.h>

@class NSProgress;

@interface PLLibraryServicesOperation : NSBlockOperation {

	/*^block*/id _cancellationBlock;
	os_unfair_lock_s _cancellationLock;
	BOOL _cancellationBlockCalled;
	long long _requiredState;
	NSProgress* _progress;
	long long _progressPercentOfTotal;

}

@property (assign,nonatomic) long long requiredState;                       //@synthesize requiredState=_requiredState - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long progressPercentOfTotal;              //@synthesize progressPercentOfTotal=_progressPercentOfTotal - In the implementation block
@property (nonatomic,copy) id cancellationBlock;                            //@synthesize cancellationBlock=_cancellationBlock - In the implementation block
+(id)operationWithName:(id)arg1 requiredState:(long long)arg2 parentProgress:(id)arg3 execution:(/*^block*/id)arg4 ;
+(BOOL)shouldSuppressLogging;
+(void)setShouldSuppressLogging:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(long long)requiredState;
-(void)setRequiredState:(long long)arg1 ;
-(long long)progressPercentOfTotal;
-(void)setCancellationBlock:(id)arg1 ;
-(id)cancellationBlock;
-(void)setExecutionBlockFromOperationBlock:(/*^block*/id)arg1 ;
-(void)_safeRemoveCancellationObserver;
-(void)setProgressPercentOfTotal:(long long)arg1 ;
@end

