/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class PHAGraphServiceWorker, NSString;

@interface PHAPendingRequestReference : NSObject {

	PHAGraphServiceWorker* _worker;
	NSString* _label;

}

@property (__weak) PHAGraphServiceWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (retain) NSString * label;                            //@synthesize label=_label - In the implementation block
-(PHAGraphServiceWorker *)worker;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)dealloc;
-(void)setWorker:(PHAGraphServiceWorker *)arg1 ;
@end

