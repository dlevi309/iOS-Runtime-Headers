/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(int)_queryRevokableStatusForProvider:(id)arg1 ;
-(id)_locationOfProvider:(id)arg1 ;
@end

