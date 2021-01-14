/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@protocol HMIVideoAnalyzerDelegate;
@class NSUUID, HMIHomePersonManager, NSSet, HMIVideoAnalyzerConfiguration, NSDictionary, NSString;

@interface HMIVideoAnalyzer : HMFObject {

	id<HMIVideoAnalyzerDelegate> _delegate;
	NSUUID* _identifier;
	HMIHomePersonManager* _homePersonManager;
	NSSet* _externalPersonManagers;
	unsigned long long _status;
	HMIVideoAnalyzerConfiguration* _configuration;
	NSDictionary* _options;

}

@property (copy,readonly) HMIVideoAnalyzerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (copy,readonly) NSDictionary * options;                                     //@synthesize options=_options - In the implementation block
@property (readonly) NSString * stateDescription; 
@property (readonly) double delay; 
@property (assign,nonatomic) double analysisFPS; 
@property (assign,nonatomic) BOOL monitored; 
@property (__weak) id<HMIVideoAnalyzerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (retain) HMIHomePersonManager * homePersonManager;                          //@synthesize homePersonManager=_homePersonManager - In the implementation block
@property (retain) NSSet * externalPersonManagers;                                    //@synthesize externalPersonManagers=_externalPersonManagers - In the implementation block
@property (readonly) unsigned long long status;                                       //@synthesize status=_status - In the implementation block
+(id)allowedClasses;
+(id)analyzerWithConfiguration:(id)arg1 identifier:(id)arg2 legacy:(BOOL)arg3 remote:(BOOL)arg4 error:(id*)arg5 ;
+(id)analyzerWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)analyzerWithConfiguration:(id)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(void)flush;
-(void)finish;
-(id<HMIVideoAnalyzerDelegate>)delegate;
-(NSDictionary *)options;
-(void)setDelegate:(id<HMIVideoAnalyzerDelegate>)arg1 ;
-(double)delay;
-(HMIVideoAnalyzerConfiguration *)configuration;
-(HMIHomePersonManager *)homePersonManager;
-(NSUUID *)identifier;
-(NSString *)stateDescription;
-(void)flushAsync;
-(void)cancel;
-(unsigned long long)status;
-(void)setHomePersonManager:(HMIHomePersonManager *)arg1 ;
-(NSSet *)externalPersonManagers;
-(void)setExternalPersonManagers:(NSSet *)arg1 ;
-(id)initWithConfiguration:(id)arg1 identifier:(id)arg2 ;
-(double)analysisFPS;
-(void)setAnalysisFPS:(double)arg1 ;
-(BOOL)monitored;
-(void)analyzeFragment:(id)arg1 configuration:(id)arg2 ;
-(void)setMonitored:(BOOL)arg1 ;
-(void)handleAssetData:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleAssetData:(id)arg1 withOptions:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)handleMessageWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

