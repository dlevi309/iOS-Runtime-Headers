/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

