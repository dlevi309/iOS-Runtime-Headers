/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NPKGreenTeaDataUsageResolver : NSObject {

	BOOL _currentlyResolving;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) BOOL currentlyResolving;                                 //@synthesize currentlyResolving=_currentlyResolving - In the implementation block
+(void)resolveGreenTeaDataUsageIfNecessary;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)resolveGreenTeaDataUsageIfNecessary;
-(void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)currentlyResolving;
-(void)setCurrentlyResolving:(BOOL)arg1 ;
@end

