/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REElementDataSourceProperties.h>

@protocol REElementDataSourceActivityDelegate, REElementDataSourceDelegate;
@class NSString, NSDictionary, NSArray;

@interface REElementDataSource : NSObject <REElementDataSourceProperties> {

	id<REElementDataSourceActivityDelegate> _activityDelegate;
	BOOL _running;
	BOOL _allowsLocationUse;
	BOOL _unlockedSinceBoot;
	id<REElementDataSourceDelegate> _delegate;
	unsigned long long _state;
	NSString* _logHeader;

}

@property (assign,nonatomic,__weak) id<REElementDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSections; 
@property (getter=isRunning,nonatomic,readonly) BOOL running;                                   //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL allowsLocationUse;                                            //@synthesize allowsLocationUse=_allowsLocationUse - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * logHeader;                                            //@synthesize logHeader=_logHeader - In the implementation block
@property (getter=hasUnlockedSinceBoot,nonatomic,readonly) BOOL unlockedSinceBoot;              //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * dataSourceProperties; 
+(id)bundleIdentifier;
+(id)contentAttributes;
+(id)applicationBundleIdentifier;
+(BOOL)wantsReloadForSignificantTimeChange;
+(unsigned long long)elementContentMode;
+(BOOL)wantsPrivateQueue;
+(BOOL)drivenByUserInteraction;
+(id)overrideDataSourceImage;
+(id)overrideLocalizedDataSourceName;
+(BOOL)wantsAppPrewarm;
+(BOOL)wantsLocationInUseAsserton;
+(BOOL)supportsPersistence;
+(SCD_Struct_RE2)minimumSupportedSystemVersion;
+(BOOL)wantsReloadForFirstDeviceUnlock;
+(BOOL)wantsAutomaticFetching;
-(void)setRunning:(BOOL)arg1 ;
-(id)init;
-(id<REElementDataSourceDelegate>)delegate;
-(void)pause;
-(NSString *)name;
-(void)setDelegate:(id<REElementDataSourceDelegate>)arg1 ;
-(id)activityDelegate;
-(void)setActivityDelegate:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isRunning;
-(unsigned long long)state;
-(BOOL)hasUnlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)resume;
-(NSArray *)supportedSections;
-(void)getElementsInSection:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)complicationDescriptor;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)beginActivity:(id)arg1 ;
-(NSString *)logHeader;
-(void)beginFetchingData;
-(void)finishFetchingData;
-(void)loadLoggingHeader;
-(void)finishActivity:(id)arg1 ;
-(NSDictionary *)dataSourceProperties;
-(void)elementWithIdentifierWillBecomeVisible:(id)arg1 ;
-(void)elementWithIdentifierDidBecomeHidden:(id)arg1 ;
-(BOOL)allowsLocationUse;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
@end

