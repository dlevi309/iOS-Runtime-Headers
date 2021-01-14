/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)shouldSuppressLogging;
+(void)setShouldSuppressLogging:(BOOL)arg1 ;
+(id)operationWithName:(id)arg1 requiredState:(long long)arg2 parentProgress:(id)arg3 execution:(/*^block*/id)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id)init;
-(void)setRequiredState:(long long)arg1 ;
-(id)debugDescription;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)cancellationBlock;
-(void)_safeRemoveCancellationObserver;
-(long long)progressPercentOfTotal;
-(long long)requiredState;
-(void)setCancellationBlock:(id)arg1 ;
-(void)setProgressPercentOfTotal:(long long)arg1 ;
-(void)setExecutionBlockFromOperationBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

