/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {

	NSString* _rootPath;

}
+(BOOL)appPredictionPanelExistsInPage:(id)arg1 ;
+(BOOL)suggestionsWidgetExistsInPage:(id)arg1 ;
-(id)loadDockAppListWithError:(id*)arg1 ;
-(id)_filePathForDockConfig;
-(id)init;
-(id)loadHomeScreenAndTodayPageConfigurationsWithError:(id*)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)writeDockAppList:(id)arg1 error:(id*)arg2 ;
-(id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)arg1 error:(id*)arg2 ;
-(id)prettyPrintedJSON;
-(id)_filePathForHomeScreenPageConfig;
-(id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id*)arg1 ;
-(BOOL)_writeData:(id)arg1 toFileAtPath:(id)arg2 ;
-(id)_filePathForTodayPage;
-(id)loadHomeScreenPageConfigurationsWithError:(id*)arg1 ;
-(BOOL)writeTodayPageStacks:(id)arg1 appPredictionPanels:(id)arg2 error:(id*)arg3 ;
-(BOOL)_writeRootObject:(id)arg1 toFileAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeHomeScreenPageConfigurations:(id)arg1 error:(id*)arg2 ;
-(id)_readDataFromFileAtPath:(id)arg1 error:(id*)arg2 ;
@end

