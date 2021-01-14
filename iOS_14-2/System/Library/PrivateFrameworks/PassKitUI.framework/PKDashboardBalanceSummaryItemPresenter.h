/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPaymentTransactionCollectionViewCell, PKDashboardButtonCollectionViewCell, PKDashboardCurrencyAmountCell, NSDateFormatter, UIImage, NSData, QLItem, QLPreviewController, NSString;

@interface PKDashboardBalanceSummaryItemPresenter : NSObject <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, PKDashboardItemPresenter> {

	PKPaymentTransactionCollectionViewCell* _sampleTransactionCell;
	PKDashboardButtonCollectionViewCell* _sampleButtonCell;
	PKDashboardCurrencyAmountCell* _sampleCurrencyCell;
	PKDashboardButtonCollectionViewCell* _downloadPDFCell;
	PKDashboardButtonCollectionViewCell* _exportStatementDataCell;
	NSDateFormatter* _formatterMonthYear;
	NSDateFormatter* _formatterMonthAndDay;
	NSDateFormatter* _formatterMonthDayYear;
	NSDateFormatter* _formatterMonth;
	UIImage* _statementIcon;
	NSData* _pdfData;
	NSData* _exportedStatementData;
	QLItem* _pdfItem;
	QLItem* _exportedStatementDataItem;
	QLPreviewController* _previewController;
	long long _cellStyle;

}

@property (assign,nonatomic) long long cellStyle;                   //@synthesize cellStyle=_cellStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCellStyle:(long long)arg1 ;
-(id)init;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)_shouldInset;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(id)_statementCellTitleForItem:(id)arg1 ;
-(void)_downloadAndPresentStatementForItem:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_selectFileFormatForExportedStatementDataForItem:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureStatementBalanceCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureStatementCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureSpendingCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureInstallmentBalanceCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureTotalBalanceCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureInterestCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configurePaymentsAndCreditsCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureDailyCashCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureStatementDownloadCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureExportStatementDataCell:(id)arg1 forItem:(id)arg2 ;
-(id)statementIcon;
-(BOOL)_statementIsFromMonthPriorToSummaryForItem:(id)arg1 ;
-(id)_readableFileTypeForFormat:(id)arg1 feature:(unsigned long long)arg2 ;
-(void)_downloadExportedStatementDataForItem:(id)arg1 withFileFormat:(id)arg2 inCollectionView:(id)arg3 ;
-(id)provideDataForItem:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(long long)cellStyle;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(BOOL)arg5 ;
@end

