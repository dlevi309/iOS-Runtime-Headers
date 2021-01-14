/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSString, NSDictionary, UIViewController;

@interface MiroPPT : NSObject {

	NSString* _currentTestName;
	NSDictionary* _currentTestOptions;
	UIViewController* _playerViewController;

}

@property (nonatomic,retain) NSString * currentTestName;                           //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,retain) NSDictionary * currentTestOptions;                    //@synthesize currentTestOptions=_currentTestOptions - In the implementation block
@property (nonatomic,retain) UIViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
+(id)sharedInstance;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(UIViewController *)playerViewController;
-(void)setPlayerViewController:(UIViewController *)arg1 ;
-(NSString *)currentTestName;
-(BOOL)dismissAllModalViewControllers;
-(NSDictionary *)currentTestOptions;
-(void)setCurrentTestOptions:(NSDictionary *)arg1 ;
-(int)currentTestIterations;
-(int)currentTestOffset;
-(int)currentTestLength;
-(void)startedCurrentTest;
-(void)finishedCurrentTest;
-(void)finishedCurrentTestWithExtraResults:(id)arg1 ;
-(void)failedCurrentTest;
@end

