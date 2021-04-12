/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)wantsPrivateQueue;
+(BOOL)drivenByUserInteraction;
+(id)overrideDataSourceImage;
+(id)overrideLocalizedDataSourceName;
+(BOOL)wantsAppPrewarm;
+(BOOL)wantsLocationInUseAsserton;
+(BOOL)supportsPersistence;
+(SCD_Struct_RE2)minimumSupportedSystemVersion;
+(BOOL)wantsReloadForSignificantTimeChange;
+(BOOL)wantsReloadForFirstDeviceUnlock;
+(BOOL)wantsAutomaticFetching;
+(unsigned long long)elementContentMode;
-(id)init;
-(NSString *)name;
-(id<REElementDataSourceDelegate>)delegate;
-(void)setDelegate:(id<REElementDataSourceDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(unsigned long long)state;
-(BOOL)isRunning;
-(void)setState:(unsigned long long)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(id)activityDelegate;
-(void)setActivityDelegate:(id)arg1 ;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(BOOL)hasUnlockedSinceBoot;
-(void)beginActivity:(id)arg1 ;
-(void)beginFetchingData;
-(void)finishFetchingData;
-(void)loadLoggingHeader;
-(void)finishActivity:(id)arg1 ;
-(NSDictionary *)dataSourceProperties;
-(NSArray *)supportedSections;
-(void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getElementsInSection:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)elementWithIdentifierWillBecomeVisible:(id)arg1 ;
-(void)elementWithIdentifierDidBecomeHidden:(id)arg1 ;
-(id)complicationDescriptor;
-(BOOL)allowsLocationUse;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(NSString *)logHeader;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
@end

