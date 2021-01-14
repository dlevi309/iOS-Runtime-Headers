/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoAnalyzerDelegate.h>

@class NSString;

@interface HMIVideoAnalyzerDelegateAdapter : HMFObject <HMIVideoAnalyzerDelegate> {

	/*^block*/id _analyzerDidAnalyzeFrame;
	/*^block*/id _analyzerDidAnalyzeFragment;
	/*^block*/id _analyzerDidFailWithError;

}

@property (copy) id analyzerDidAnalyzeFrame;                        //@synthesize analyzerDidAnalyzeFrame=_analyzerDidAnalyzeFrame - In the implementation block
@property (copy) id analyzerDidAnalyzeFragment;                     //@synthesize analyzerDidAnalyzeFragment=_analyzerDidAnalyzeFragment - In the implementation block
@property (copy) id analyzerDidFailWithError;                       //@synthesize analyzerDidFailWithError=_analyzerDidFailWithError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)analyzer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)analyzer:(id)arg1 didAnalyzeFrame:(id)arg2 ;
-(void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 ;
-(id)analyzerDidAnalyzeFrame;
-(id)analyzerDidAnalyzeFragment;
-(id)analyzerDidFailWithError;
-(void)setAnalyzerDidAnalyzeFrame:(id)arg1 ;
-(void)setAnalyzerDidAnalyzeFragment:(id)arg1 ;
-(void)setAnalyzerDidFailWithError:(id)arg1 ;
@end

