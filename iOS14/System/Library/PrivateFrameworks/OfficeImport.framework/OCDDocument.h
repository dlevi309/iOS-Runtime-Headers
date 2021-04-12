/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)theme;
-(NSMutableArray *)charts;
-(OCDWriter *)writer;
-(id)init;
-(OCDReader *)reader;
-(OADBlipCollection *)blips;
-(void)setTheme:(id)arg1 ;
-(OCDSummary *)summary;
-(void)setReader:(OCDReader *)arg1 ;
-(void)setWriter:(OCDWriter *)arg1 ;
-(void)removeUnnecessaryOverrides;
-(OADTableStyleCollection *)tableStyles;
-(BOOL)isFromBinaryFile;
-(id)encryptionInfo;
-(void)setEncryptionInfo:(id)arg1 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(id)bulletBlips;
-(OITSUPointerKeyDictionary *)dualDrawableMap;
-(OADTextListStyle *)defaultTextStyle;
-(OADGraphicStyleCache *)graphicStyleCache;
-(void)setGraphicStyleCache:(OADGraphicStyleCache *)arg1 ;
@end

