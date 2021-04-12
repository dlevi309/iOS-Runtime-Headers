/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXTextSourceDataSource.h>
#import <libobjc.A.dylib/SXDataTableDataSource.h>

@protocol SXDataTableComponentControllerDataSource, SXDataTableStyleFactory, SXDataTableTextSourceFactory, SXDOMObjectProviding;
@class SXDataTableDictionary, NSArray, SXDataRecordValueTransformerFactory, NSString;

@interface SXDataTableComponentController : NSObject <SXTextSourceDataSource, SXDataTableDataSource> {

	SXDataTableDictionary* _cellObjects;
	SXDataTableDictionary* _textLayouters;
	id<SXDataTableComponentControllerDataSource> _dataSource;
	id<SXDataTableStyleFactory> _styleFactory;
	id<SXDataTableTextSourceFactory> _textSourceFactory;
	NSArray* _records;
	SXDataRecordValueTransformerFactory* _recordValueTransformerFactory;
	id<SXDOMObjectProviding> _DOMObjectProvider;

}

@property (nonatomic,readonly) id<SXDataTableStyleFactory> styleFactory;                                       //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,readonly) id<SXDataTableTextSourceFactory> textSourceFactory;                             //@synthesize textSourceFactory=_textSourceFactory - In the implementation block
@property (nonatomic,retain) NSArray * records;                                                                //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) SXDataRecordValueTransformerFactory * recordValueTransformerFactory;              //@synthesize recordValueTransformerFactory=_recordValueTransformerFactory - In the implementation block
@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                                     //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) SXDataTableDictionary * cellObjects;                                            //@synthesize cellObjects=_cellObjects - In the implementation block
@property (nonatomic,readonly) SXDataTableDictionary * textLayouters;                                          //@synthesize textLayouters=_textLayouters - In the implementation block
@property (nonatomic,__weak,readonly) id<SXDataTableComponentControllerDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDataTableComponentControllerDataSource>)dataSource;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(NSArray *)records;
-(id)component;
-(void)setRecords:(NSArray *)arg1 ;
-(id<SXDataTableStyleFactory>)styleFactory;
-(void)loadRecords;
-(id)textStyleForIdentifier:(id)arg1 ;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(BOOL)arg2 ;
-(id<SXDataTableTextSourceFactory>)textSourceFactory;
-(id)textResizerForTextSource:(id)arg1 ;
-(id)textRulesForTextSource:(id)arg1 ;
-(id)additionsForTextSource:(id)arg1 ;
-(id)inlineTextStylesForTextSource:(id)arg1 ;
-(id)contentSizeCategoryForTextSource:(id)arg1 ;
-(id)defaultComponentTextStyleForTextSource:(id)arg1 ;
-(id)defaultComponentTextStylesForTextSource:(id)arg1 ;
-(id)linkStyleForTextSource:(id)arg1 ;
-(unsigned long long)dataOrientation;
-(id)initWithStyleFactory:(id)arg1 textSourceFactory:(id)arg2 dataSource:(id)arg3 recordValueTransformerFactory:(id)arg4 DOMObjectProvider:(id)arg5 ;
-(void)prepareForLayout;
-(id)rowStyleForRowIndex:(unsigned long long)arg1 ;
-(id)columnStyleForColumnIndex:(unsigned long long)arg1 ;
-(id)cellStyleForIndexPath:(NSRange)arg1 ;
-(SXDataRecordValueTransformerFactory *)recordValueTransformerFactory;
-(SXDataTableDictionary *)cellObjects;
-(SXDataTableDictionary *)textLayouters;
-(BOOL)indexPathIsHeader:(NSRange)arg1 ;
-(id)dataDescriptorForIdentifier:(id)arg1 ;
-(BOOL)hasRowHeader;
-(BOOL)hasColumnHeader;
-(id)dataDescriptorForIndexPath:(NSRange)arg1 ;
-(NSRange)indexPathSubstractingHeaders:(NSRange)arg1 ;
-(id)recordForIndexPath:(NSRange)arg1 ;
-(id)cellObjectForIndexPath:(NSRange)arg1 ;
-(double)convertConvertibleValue:(SXConvertibleValue)arg1 ;
-(id)textLayouterForIndexPath:(NSRange)arg1 ;
-(double)minimumWidthForStorage:(id)arg1 usingStringEnumeration:(unsigned long long)arg2 ;
-(BOOL)shouldTreatIndexPathAsHeader:(NSRange)arg1 ;
-(id)tableBorder;
-(id)backgroundColorForRowAtIndex:(unsigned long long)arg1 ;
-(id)backgroundColorForColumnAtIndex:(unsigned long long)arg1 ;
-(id)backgroundColorForCellAtIndexPath:(NSRange)arg1 ;
-(double)widthForCellAtIndexPath:(NSRange)arg1 ;
-(double)heightForCellAtIndexPath:(NSRange)arg1 ;
-(double)minimumWidthForCellAtIndexPath:(NSRange)arg1 ;
-(double)heightForCellndexPath:(NSRange)arg1 forWidth:(double)arg2 ;
-(id)cellBorderForCellAtIndexPath:(NSRange)arg1 ;
-(UIEdgeInsets)paddingForCellAtIndexPath:(NSRange)arg1 ;
-(unsigned long long)verticalAlignmentForCellAtIndexPath:(NSRange)arg1 ;
-(unsigned long long)horizontalAlignmentForCellAtIndexPath:(NSRange)arg1 ;
-(id)rowDividerAtIndex:(unsigned long long)arg1 ;
-(id)columnDividerAtIndex:(unsigned long long)arg1 ;
-(void)setRecordValueTransformerFactory:(SXDataRecordValueTransformerFactory *)arg1 ;
@end

