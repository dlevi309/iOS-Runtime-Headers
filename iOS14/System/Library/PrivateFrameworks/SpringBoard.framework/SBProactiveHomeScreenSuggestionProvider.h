/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/ATXHomeScreenSuggestionClientObserver.h>

@class NSHashTable, ATXHomeScreenPrediction, SBHIconManager, NSString;

@interface SBProactiveHomeScreenSuggestionProvider : NSObject <ATXHomeScreenSuggestionClientObserver> {

	NSHashTable* _observers;
	ATXHomeScreenPrediction* _currentPrediction;
	SBHIconManager* _iconManager;

}

@property (nonatomic,readonly) SBHIconManager * iconManager;                           //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,retain) ATXHomeScreenPrediction * currentPrediction;              //@synthesize currentPrediction=_currentPrediction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(ATXHomeScreenPrediction *)currentPrediction;
-(id)iconModel;
-(SBHIconManager *)iconManager;
-(id)rootFolder;
-(id)_iconDataSourceInIcon:(id)arg1 withUniqueIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 widgetKind:(id)arg4 suggestion:(BOOL)arg5 ;
-(void)suggestionClientDidRefreshSuggestions:(id)arg1 ;
-(void)setCurrentPrediction:(ATXHomeScreenPrediction *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)processUpdatedPredictions:(id)arg1 ;
-(void)updatePredictions;
-(id)initWithIconManager:(id)arg1 ;
@end

