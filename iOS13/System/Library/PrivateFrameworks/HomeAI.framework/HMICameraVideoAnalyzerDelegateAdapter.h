/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <libobjc.A.dylib/HMICameraVideoAnalyzerDelegate.h>

@class NSString;

@interface HMICameraVideoAnalyzerDelegateAdapter : NSObject <HMICameraVideoAnalyzerDelegate> {

	/*^block*/id _didAnalyzeFragment;
	/*^block*/id _didFailAnalysisForFragment;
	/*^block*/id _didFindSignificantEvent;
	/*^block*/id _didNotAnalyzeFragment;

}

@property (nonatomic,copy) id didAnalyzeFragment;                      //@synthesize didAnalyzeFragment=_didAnalyzeFragment - In the implementation block
@property (nonatomic,copy) id didFailAnalysisForFragment;              //@synthesize didFailAnalysisForFragment=_didFailAnalysisForFragment - In the implementation block
@property (nonatomic,copy) id didFindSignificantEvent;                 //@synthesize didFindSignificantEvent=_didFindSignificantEvent - In the implementation block
@property (nonatomic,copy) id didNotAnalyzeFragment;                   //@synthesize didNotAnalyzeFragment=_didNotAnalyzeFragment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finish;
-(void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3 ;
-(void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3 ;
-(void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3 ;
-(void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3 ;
-(id)didAnalyzeFragment;
-(id)didFailAnalysisForFragment;
-(id)didFindSignificantEvent;
-(id)didNotAnalyzeFragment;
-(void)setDidAnalyzeFragment:(id)arg1 ;
-(void)setDidFailAnalysisForFragment:(id)arg1 ;
-(void)setDidNotAnalyzeFragment:(id)arg1 ;
-(void)setDidFindSignificantEvent:(id)arg1 ;
@end

