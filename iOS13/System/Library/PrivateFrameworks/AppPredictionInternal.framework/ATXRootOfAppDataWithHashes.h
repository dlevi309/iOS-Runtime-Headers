/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXRootOfAppData.h>

@class NSMutableDictionary;

@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData {

	NSMutableDictionary* _dataForBundleId;

}
-(id)init;
-(id)description;
-(id)serialize;
-(id)initWithSerialized:(id)arg1 ;
-(unsigned long long)sessionCountForBundleId:(id)arg1 ;
-(unsigned long long)sessionCountForBundleId:(id)arg1 firstAction:(id)arg2 ;
-(void)recordSessionWithBundleId:(id)arg1 firstAction:(id)arg2 ;
@end

