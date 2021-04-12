/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REMotionRelevanceProviderManagerProperties.h>

@class NSString;

@interface REMotionRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMotionRelevanceProviderManagerProperties> {

	unsigned long long _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long motionType; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)pause;
-(void)resume;
-(id)initWithQueue:(id)arg1 ;
-(unsigned long long)motionType;
-(void)_prepareForUpdate;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)predictorDidUpdate:(id)arg1 ;
@end

