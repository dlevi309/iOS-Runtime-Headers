/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSArray, NSString;


@protocol FCChannelProviding <FCTagProviding>
@property (nonatomic,copy,readonly) NSArray * sectionIDs; 
@property (nonatomic,copy,readonly) NSString * defaultSectionID; 
@property (nonatomic,readonly) BOOL supportsNotifications; 
@property (nonatomic,readonly) BOOL isWhitelisted; 
@property (nonatomic,copy,readonly) NSArray * currentIssueIDs; 
@property (nonatomic,copy,readonly) NSString * backIssuesListID; 
@property (nonatomic,readonly) NSString * supergroupKnobsJson; 
@property (nonatomic,readonly) NSString * supergroupConfigJson; 
@required
-(NSArray *)sectionIDs;
-(NSArray *)currentIssueIDs;
-(NSString *)backIssuesListID;
-(NSString *)defaultSectionID;
-(NSString *)supergroupKnobsJson;
-(BOOL)supportsNotifications;
-(BOOL)isWhitelisted;
-(id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2;
-(NSString *)supergroupConfigJson;
-(id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2;

@end

