/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)resolveGreenTeaDataUsageIfNecessary;
-(void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)currentlyResolving;
-(void)setCurrentlyResolving:(BOOL)arg1 ;
@end

