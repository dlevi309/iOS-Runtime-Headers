/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isWhitelisted;
-(NSArray *)sectionIDs;
-(NSString *)defaultSectionID;
-(id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2;
-(id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2;
-(NSArray *)currentIssueIDs;
-(NSString *)supergroupConfigJson;
-(NSString *)supergroupKnobsJson;
-(BOOL)supportsNotifications;
-(NSString *)backIssuesListID;

@end

