/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class CNUIDataCollectorAggDLogger, NSString, CNUIDataCollectorSGLogger;

@interface CNUIDataCollector : NSObject {

	CNUIDataCollectorAggDLogger* _aggDLogger;
	NSString* _appIdentifier;
	CNUIDataCollectorSGLogger* _sgLogger;

}

@property (nonatomic,readonly) CNUIDataCollectorAggDLogger * aggDLogger;              //@synthesize aggDLogger=_aggDLogger - In the implementation block
@property (nonatomic,readonly) NSString * appIdentifier;                              //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) CNUIDataCollectorSGLogger * sgLogger;                  //@synthesize sgLogger=_sgLogger - In the implementation block
+(id)sharedCollector;
+(BOOL)isEnabled;
-(NSString *)appIdentifier;
-(CNUIDataCollectorSGLogger *)sgLogger;
-(id)init;
-(CNUIDataCollectorAggDLogger *)aggDLogger;
-(void)logPresentation;
-(void)logContactActionType:(id)arg1 attributes:(id)arg2 ;
-(void)_reallyLogIndexUsage;
-(void)logIndexUsage;
-(void)logSearchUsage;
-(void)logSearchResultsFetchedSuggested:(BOOL)arg1 ;
-(void)logSearchResultSelected:(id)arg1 ;
-(void)logRefreshUsage;
-(void)logGroupsShown:(long long)arg1 totalGroups:(long long)arg2 ;
-(void)logAddProperty:(id)arg1 contact:(id)arg2 ;
-(void)logContactShown:(id)arg1 ;
-(void)logContactCreated:(id)arg1 originalContact:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 ;
@end

