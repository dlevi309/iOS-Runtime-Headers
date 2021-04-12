/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESharedLocationRelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>

@class NSString;

@interface RELocationRelevanceProviderManager : RESharedLocationRelevanceProviderManager <REPredictorObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(id)_dependencyClasses;
-(void)pause;
-(void)resume;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(int)_queryRevokableStatusForProvider:(id)arg1 ;
-(id)_locationOfProvider:(id)arg1 ;
@end

