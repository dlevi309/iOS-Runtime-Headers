/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXGadgetDataSourceManager.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PUSearchZeroKeywordChangeDelegate.h>

@class NSArray, PUSearchZeroKeywordDataSource, PXTapToRadarGadgetProvider, NSString;

@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PXSettingsKeyObserver, PUSearchZeroKeywordChangeDelegate> {

	NSArray* _gadgetProviders;
	PUSearchZeroKeywordDataSource* _zeroKeywordDataSource;
	NSArray* _zeroKeywordGadgetProviders;
	PXTapToRadarGadgetProvider* _tapToRadarProvider;
	long long _filteringState;

}

@property (nonatomic,readonly) PUSearchZeroKeywordDataSource * zeroKeywordDataSource;              //@synthesize zeroKeywordDataSource=_zeroKeywordDataSource - In the implementation block
@property (nonatomic,retain) NSArray * zeroKeywordGadgetProviders;                                 //@synthesize zeroKeywordGadgetProviders=_zeroKeywordGadgetProviders - In the implementation block
@property (nonatomic,retain) PXTapToRadarGadgetProvider * tapToRadarProvider;                      //@synthesize tapToRadarProvider=_tapToRadarProvider - In the implementation block
@property (assign,nonatomic) long long filteringState;                                             //@synthesize filteringState=_filteringState - In the implementation block
@property (nonatomic,readonly) BOOL isExpectedToLoadNonEmptyDataSourceSoon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PUSearchZeroKeywordDataSource *)zeroKeywordDataSource;
-(void)didUpdateSections:(id)arg1 ;
-(PXTapToRadarGadgetProvider *)tapToRadarProvider;
-(long long)filteringState;
-(void)_waitForFirstDisplayTimedOut;
-(id)hiddenGadgetProviders;
-(void)setZeroKeywordGadgetProviders:(NSArray *)arg1 ;
-(BOOL)_zeroKeywordDataSourceHasZeroKeywords;
-(void)setTapToRadarProvider:(PXTapToRadarGadgetProvider *)arg1 ;
-(BOOL)isExpectedToLoadNonEmptyDataSourceSoon;
-(id)gadgetProviders;
-(void)setFilteringState:(long long)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(NSArray *)zeroKeywordGadgetProviders;
-(void)refreshData;
-(void)ppt_prepareZeroKeywordRequest:(/*^block*/id)arg1 ;
@end

