/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzer.h>
#import <libobjc.A.dylib/HMICameraVideoAnalyzerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_group;
@class NSObject, NSMutableDictionary, HMICameraVideoAnalyzer, NSString;

@interface HMIVideoAnalyzerLegacy : HMIVideoAnalyzer <HMICameraVideoAnalyzerDelegate, HMFLogging> {

	NSObject*<OS_dispatch_group> _group;
	NSMutableDictionary* _configurationBySequenceNumber;
	unsigned long long _pendingFragments;
	BOOL _failed;
	BOOL _cancelled;
	SCD_Struct_HM3 _sessionDuration;
	HMICameraVideoAnalyzer* _legacyAnalyzer;

}

@property (readonly) HMICameraVideoAnalyzer * legacyAnalyzer;              //@synthesize legacyAnalyzer=_legacyAnalyzer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)finish;
-(id)homePersonManager;
-(void)flushAsync;
-(void)cancel;
-(unsigned long long)status;
-(void)setHomePersonManager:(id)arg1 ;
-(id)externalPersonManagers;
-(void)setExternalPersonManagers:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 ;
-(void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3 ;
-(void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3 ;
-(void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3 ;
-(void)setAnalysisFPS:(double)arg1 ;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 remote:(BOOL)arg3 ;
-(HMICameraVideoAnalyzer *)legacyAnalyzer;
-(void)_handleFragment:(id)arg1 withResult:(id)arg2 events:(id)arg3 outcome:(id)arg4 ;
-(id)_makeFrameResult:(id)arg1 withPresentationTimeStamp:(SCD_Struct_HM3)arg2 ;
-(void)analyzeFragment:(id)arg1 configuration:(id)arg2 ;
-(void)setMonitored:(BOOL)arg1 ;
@end

