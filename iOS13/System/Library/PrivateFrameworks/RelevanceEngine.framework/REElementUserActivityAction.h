/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUserActivity *)userActivity;
-(NSString *)applicationID;
-(void)_performWithContext:(id)arg1 ;
-(void)_submitMetricsWithSuccess:(BOOL)arg1 ;
-(id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 ;
@end

