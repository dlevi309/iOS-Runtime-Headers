/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconListLayoutProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSString;

@interface SBHDefaultIconListLayoutProvider : NSObject <SBIconListLayoutProvider, BSDescriptionProviding> {

	NSMutableDictionary* _cachedListLayouts;
	unsigned long long _screenType;
	unsigned long long _layoutOptions;

}

@property (nonatomic,readonly) unsigned long long screenType;                 //@synthesize screenType=_screenType - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)currentDeviceScreenType;
+(id)frameworkFallbackInstance;
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)layoutOptions;
-(unsigned long long)screenType;
-(id)layoutForIconLocation:(id)arg1 ;
-(id)initWithScreenType:(unsigned long long)arg1 layoutOptions:(unsigned long long)arg2 ;
-(void)configureFloatyFolderConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 ;
-(void)configureLabelConfigurations:(id)arg1 forScreenType:(unsigned long long)arg2 ;
-(void)configureIconAccessoryConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 ;
-(void)configureFolderIconConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 ;
-(void)configureClockIconConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 ;
-(void)configureSidebarConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 ;
-(id)makeLayoutForIconLocation:(id)arg1 ;
-(id)initWithScreenType:(unsigned long long)arg1 ;
-(id)initWithLayoutOptions:(unsigned long long)arg1 ;
@end

