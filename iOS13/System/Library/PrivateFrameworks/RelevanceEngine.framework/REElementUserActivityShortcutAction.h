/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementUserActivityAction.h>

@interface REElementUserActivityShortcutAction : REElementUserActivityAction {

	BOOL _isLocalDonation;

}

@property (nonatomic,readonly) BOOL isLocalDonation;              //@synthesize isLocalDonation=_isLocalDonation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isLocalDonation;
-(void)_submitMetricsWithSuccess:(BOOL)arg1 ;
-(id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 isLocalDonation:(BOOL)arg3 ;
@end

