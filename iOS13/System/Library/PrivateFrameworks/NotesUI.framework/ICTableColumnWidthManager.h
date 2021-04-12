/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol ICAvailableTableWidthProviding;
@class ICTable, NSObject, ICTextController, NSMutableDictionary;

@interface ICTableColumnWidthManager : NSObject {

	ICTable* _table;
	NSObject*<ICAvailableTableWidthProviding> _delegate;
	ICTextController* _styler;
	NSMutableDictionary* _cachedIdealColumnWidths;
	NSMutableDictionary* _cachedActualColumnWidths;
	NSMutableDictionary* _cachedMinimumColumnWidths;

}

@property (nonatomic,readonly) NSMutableDictionary * cachedIdealColumnWidths;                          //@synthesize cachedIdealColumnWidths=_cachedIdealColumnWidths - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedActualColumnWidths;                         //@synthesize cachedActualColumnWidths=_cachedActualColumnWidths - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedMinimumColumnWidths;                        //@synthesize cachedMinimumColumnWidths=_cachedMinimumColumnWidths - In the implementation block
@property (nonatomic,__weak,readonly) ICTable * table;                                                 //@synthesize table=_table - In the implementation block
@property (nonatomic,__weak,readonly) NSObject*<ICAvailableTableWidthProviding> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ICTextController * styler;                                              //@synthesize styler=_styler - In the implementation block
@property (nonatomic,readonly) double singleColumnTableWidth; 
-(NSObject*<ICAvailableTableWidthProviding>)delegate;
-(ICTable *)table;
-(ICTextController *)styler;
-(double)comfortableColumnWidth;
-(NSMutableDictionary *)cachedActualColumnWidths;
-(double)calculateIdealWidthOfColumn:(id)arg1 ;
-(NSMutableDictionary *)cachedIdealColumnWidths;
-(NSMutableDictionary *)cachedMinimumColumnWidths;
-(double)comfortableNumberOfColumnsOnscreen;
-(id)recalculateActualWidths;
-(id)initWithTable:(id)arg1 delegate:(id)arg2 ;
-(double)singleColumnTableWidth;
-(double)widthOfColumn:(id)arg1 ;
-(id)invalidateWidthForColumns:(id)arg1 ;
-(id)invalidateAvailableWidth;
@end

