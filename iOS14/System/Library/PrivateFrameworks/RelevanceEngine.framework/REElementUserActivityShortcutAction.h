/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementUserActivityAction.h>

@interface REElementUserActivityShortcutAction : REElementUserActivityAction {

	BOOL _isLocalDonation;

}

@property (nonatomic,readonly) BOOL isLocalDonation;              //@synthesize isLocalDonation=_isLocalDonation - In the implementation block
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isLocalDonation;
-(void)_submitMetricsWithSuccess:(BOOL)arg1 ;
-(id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 isLocalDonation:(BOOL)arg3 ;
@end

