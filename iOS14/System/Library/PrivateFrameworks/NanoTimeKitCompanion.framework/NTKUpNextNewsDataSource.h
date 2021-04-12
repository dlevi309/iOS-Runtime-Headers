/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <RelevanceEngine/REElementDataSource.h>

@class NTKUpNextElementDataSource;

@interface NTKUpNextNewsDataSource : REElementDataSource {

	NTKUpNextElementDataSource* _newsDataSourceProxy;

}

@property (nonatomic,retain) NTKUpNextElementDataSource * newsDataSourceProxy;              //@synthesize newsDataSourceProxy=_newsDataSourceProxy - In the implementation block
+(id)bundleIdentifier;
+(Class)nanoNewsDataSourceClass;
+(BOOL)wantsReloadForSignificantTimeChange;
+(unsigned long long)elementContentMode;
-(void)setRunning:(BOOL)arg1 ;
-(id)init;
-(void)pause;
-(void)setDelegate:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)resume;
-(id)supportedSections;
-(void)getElementsInSection:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(NTKUpNextElementDataSource *)newsDataSourceProxy;
-(void)setNewsDataSourceProxy:(NTKUpNextElementDataSource *)arg1 ;
@end

