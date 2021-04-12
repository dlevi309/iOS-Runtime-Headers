/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSDictionary;


@protocol PXMutableBrowserSummaryController <NSObject>
@property (assign,nonatomic) BOOL shouldUseSubtitles; 
@property (assign,nonatomic) BOOL shouldUseNavigationTitle; 
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates; 
@property (assign,nonatomic) BOOL shouldShowLocationNames; 
@property (assign,nonatomic) unsigned long long containerDateFormatGranularity; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
@property (nonatomic,copy) NSDictionary * emphasizedAttributes; 
@property (nonatomic,copy) NSDictionary * selectionAttributes; 
@required
-(void)invalidateVisibleContent;
-(void)setShouldShowLocationNames:(BOOL)arg1;
-(BOOL)shouldUseNavigationTitle;
-(void)invalidateContainerTitle;
-(void)setSelectionAttributes:(id)arg1;
-(unsigned long long)containerDateFormatGranularity;
-(void)invalidateContainerDateInterval;
-(void)invalidateLocalizedContainerItemsCount;
-(NSDictionary *)selectionAttributes;
-(NSDictionary *)defaultAttributes;
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1;
-(void)setContainerDateFormatGranularity:(unsigned long long)arg1;
-(void)setShouldUseNavigationTitle:(BOOL)arg1;
-(void)invalidateSelection;
-(NSDictionary *)emphasizedAttributes;
-(void)setShouldUseSubtitles:(BOOL)arg1;
-(BOOL)shouldUseAbbreviatedDates;
-(void)setEmphasizedAttributes:(id)arg1;
-(BOOL)shouldShowLocationNames;
-(void)invalidateFilteringContainerContent;
-(BOOL)shouldUseSubtitles;
-(void)setDefaultAttributes:(id)arg1;

@end

