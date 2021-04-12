/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCDDocument.h>

@class EDResources, NSMutableArray, EDProcessors, ECMappingContext, EDWarnings, EDReference, NSDate, NSString, ESDContainer;

@interface EDWorkbook : OCDDocument {

	EDResources* mResources;
	NSMutableArray* mOtherResources;
	EDProcessors* mProcessors;
	ECMappingContext* mMappingContext;
	EDWarnings* mWarnings;
	NSMutableArray* mSheets;
	EDReference* mVisibleRange;
	unsigned long long mActiveSheetIndex;
	NSDate* mDateBaseDate;
	int mDateBase;
	NSString* mFileName;
	NSString* mTemporaryDirectory;
	NSMutableArray* mBulletBlips;
	ESDContainer* mEscherDrawingGroup;
	BOOL mIsOutOfMemoryConditionDetected;

}
+(id)impliedColorMap;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)temporaryDirectory;
-(id)warnings;
-(id)fileName;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)visibleRange;
-(void)setVisibleRange:(id)arg1 ;
-(id)processors;
-(id)sheetAtIndex:(unsigned long long)arg1 ;
-(void)removeWorksheetAtIndex:(unsigned)arg1 ;
-(unsigned long long)sheetCount;
-(id)sheetAtIndex:(unsigned long long)arg1 loadIfNeeded:(BOOL)arg2 ;
-(id)workbookName;
-(id)bulletBlips;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(void)addSheet:(id)arg1 ;
-(void)applyProcessors;
-(id)mappingContext;
-(unsigned long long)indexOfSheet:(id)arg1 ;
-(void)outOfMemoryDetected;
-(void)reduceMemoryIfPossible;
-(id)initWithFileName:(id)arg1 andStringOptimization:(BOOL)arg2 ;
-(void)addOtherResources:(id)arg1 ;
-(void)setTemporaryDirectory:(id)arg1 ;
-(id)dateBaseDate;
-(int)dateBase;
-(void)setDateBase:(int)arg1 ;
-(unsigned)legacyDateBase;
-(void)removeSheetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSheetWithName:(id)arg1 ;
-(id)activeSheet;
-(void)setActiveSheet:(id)arg1 ;
-(void)setMappingContext:(id)arg1 ;
-(BOOL)isOutOfMemoryDetected;
-(id)escherDrawingGroup;
-(void)setEscherDrawingGroup:(id)arg1 ;
-(unsigned long long)activeSheetIndex;
-(void)setActiveSheetIndex:(unsigned long long)arg1 ;
@end

