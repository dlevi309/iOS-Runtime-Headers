/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCHeadlineClusterOrdering.h>

@class NSString;

@interface FCHeadlineClusterOrderingPersonalizedTopical : NSObject <FCHeadlineClusterOrdering>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)orderTopicsWithClusteredHeadlines:(id)arg1 additionalHeadlines:(id)arg2 subscribedTagIDs:(id)arg3 scoresByArticleID:(id)arg4 personalizer:(id)arg5 tagNameProvider:(/*^block*/id)arg6 personalizationTreatment:(id)arg7 translationProvider:(id)arg8 ;
@end

