/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OCDWriter, OCDSummary, OADBlipCollection, NSMutableArray, OADTableStyleCollection, OITSUPointerKeyDictionary, OADTheme, OADTextListStyle, OADGraphicStyleCache, NSData, OCDReader;

@interface OCDDocument : NSObject {

	OCDWriter* mWriter;
	OCDSummary* mSummary;
	OADBlipCollection* mBlips;
	NSMutableArray* mCharts;
	OADTableStyleCollection* mTableStyles;
	OITSUPointerKeyDictionary* mDualDrawableMap;
	OADTheme* mDocumentTheme;
	OADTextListStyle* mDefaultTextStyle;
	OADGraphicStyleCache* mGraphicStyleCache;
	NSData* mEncryptionInfo;
	OCDReader* mReader;

}

@property (nonatomic,retain) OCDReader * reader; 
@property (nonatomic,retain) OCDWriter * writer; 
@property (nonatomic,readonly) OCDSummary * summary; 
@property (nonatomic,readonly) OADBlipCollection * blips; 
@property (nonatomic,readonly) NSMutableArray * charts; 
@property (nonatomic,readonly) OADTableStyleCollection * tableStyles; 
@property (nonatomic,readonly) OITSUPointerKeyDictionary * dualDrawableMap; 
@property (nonatomic,readonly) OADTextListStyle * defaultTextStyle; 
@property (nonatomic,retain) OADGraphicStyleCache * graphicStyleCache; 
-(id)init;
-(OCDSummary *)summary;
-(OCDReader *)reader;
-(id)theme;
-(void)setTheme:(id)arg1 ;
-(NSMutableArray *)charts;
-(void)setWriter:(OCDWriter *)arg1 ;
-(OCDWriter *)writer;
-(OADTextListStyle *)defaultTextStyle;
-(void)setReader:(OCDReader *)arg1 ;
-(OADBlipCollection *)blips;
-(void)removeUnnecessaryOverrides;
-(OADTableStyleCollection *)tableStyles;
-(BOOL)isFromBinaryFile;
-(id)encryptionInfo;
-(void)setEncryptionInfo:(id)arg1 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(id)bulletBlips;
-(OITSUPointerKeyDictionary *)dualDrawableMap;
-(OADGraphicStyleCache *)graphicStyleCache;
-(void)setGraphicStyleCache:(OADGraphicStyleCache *)arg1 ;
@end

