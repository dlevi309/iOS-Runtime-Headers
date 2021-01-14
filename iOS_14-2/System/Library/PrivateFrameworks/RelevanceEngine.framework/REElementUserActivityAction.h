/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@class NSUserActivity, NSString;

@interface REElementUserActivityAction : REElementAction {

	NSUserActivity* _userActivity;
	NSString* _applicationID;

}

@property (nonatomic,copy,readonly) NSUserActivity * userActivity;              //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,readonly) NSString * applicationID;                        //@synthesize applicationID=_applicationID - In the implementation block
-(NSString *)applicationID;
-(NSUserActivity *)userActivity;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(void)_submitMetricsWithSuccess:(BOOL)arg1 ;
-(id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 ;
@end

