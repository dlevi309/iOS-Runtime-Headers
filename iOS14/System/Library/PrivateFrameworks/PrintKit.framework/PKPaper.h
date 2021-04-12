/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSString, NSDictionary;

@interface PKPaper : NSObject {

	NSString* name;
	NSString* _baseName;
	int width;
	int height;
	int leftMargin;
	int topMargin;
	int rightMargin;
	int bottomMargin;
	BOOL _isTransverse;
	NSDictionary* mediaInfo;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) int leftMargin; 
@property (assign,nonatomic) int topMargin; 
@property (assign,nonatomic) int rightMargin; 
@property (assign,nonatomic) int bottomMargin; 
@property (nonatomic,copy) NSDictionary * mediaInfo; 
@property (nonatomic,retain,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * baseName; 
@property (nonatomic,readonly) CGSize paperSize; 
@property (nonatomic,readonly) CGRect imageableAreaRect; 
@property (nonatomic,readonly) double imageableArea; 
@property (nonatomic,readonly) BOOL isBorderless; 
@property (nonatomic,readonly) BOOL isTransverse;                                    //@synthesize isTransverse=_isTransverse - In the implementation block
@property (nonatomic,readonly) BOOL isRoll; 
@property (nonatomic,readonly) unsigned long long minCutLength; 
@property (nonatomic,readonly) unsigned long long maxCutLength; 
@property (nonatomic,retain,readonly) NSString * mediaType; 
@property (nonatomic,retain,readonly) NSString * mediaTypeName; 
@property (nonatomic,readonly) unsigned long long topMarginInPoints; 
@property (nonatomic,readonly) unsigned long long bottomMarginInPoints; 
@property (nonatomic,readonly) int minHeight; 
@property (nonatomic,readonly) int maxHeight; 
+(id)generic3_5x5Paper;
+(id)generic4x6Paper;
+(id)genericLetterPaper;
+(id)genericA4Paper;
+(id)documentPapers;
+(id)genericA6Paper;
+(id)genericPRC32KPaper;
+(id)photoPapers;
+(id)genericWithName:(id)arg1 ;
+(BOOL)useMetric;
+(id)mediaNameForWidth:(int)arg1 Height:(int)arg2 mediaType:(id)arg3 Borderless:(BOOL)arg4 Simplex:(BOOL)arg5 ;
+(id)genericHagakiPaper;
+(id)genericBorderlessWithName:(id)arg1 ;
+(id)defaultGenericPaperForLocale:(id)arg1 ;
+(id)paperWithAttributes:(id)arg1 ;
+(id)rollPaperWithAttributes:(id)arg1 ;
+(id)genericLegalPaper;
+(BOOL)willAdjustMarginsForDuplexMode:(id)arg1 ;
-(void)setHeight:(int)arg1 ;
-(NSString *)localizedName;
-(BOOL)isRoll;
-(int)width;
-(NSString *)mediaType;
-(void)setLeftMargin:(int)arg1 ;
-(void)setTopMargin:(int)arg1 ;
-(void)setBottomMargin:(int)arg1 ;
-(void)setWidth:(int)arg1 ;
-(CGRect)imageableAreaRect;
-(int)height;
-(int)leftMargin;
-(unsigned long long)topMarginInPoints;
-(unsigned long long)bottomMarginInPoints;
-(NSString *)mediaTypeName;
-(NSString *)name;
-(int)topMargin;
-(CGSize)paperSize;
-(NSString *)baseName;
-(unsigned long long)hash;
-(int)bottomMargin;
-(int)minHeight;
-(void)setName:(NSString *)arg1 ;
-(int)maxHeight;
-(void)setRightMargin:(int)arg1 ;
-(int)rightMargin;
-(BOOL)isEqualSizeAndMediaType:(id)arg1 ;
-(id)cutToLength:(double)arg1 ;
-(unsigned long long)minCutLength;
-(unsigned long long)maxCutLength;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)mediaInfo;
-(void)setMediaInfo:(NSDictionary *)arg1 ;
-(id)initWithWidth:(int)arg1 Height:(int)arg2 Left:(int)arg3 Top:(int)arg4 Right:(int)arg5 Bottom:(int)arg6 localizedName:(id)arg7 codeName:(id)arg8 ;
-(id)cutToPWGLength:(int)arg1 ;
-(id)nameWithoutSuffixes:(id)arg1 ;
-(void)addToMediaCol:(ipp_sRef)arg1 ;
-(double)imageableArea;
-(id)localizedNameFromDimensions;
-(id)initWithPWGSize:(pwg_size_s*)arg1 localizedName:(id)arg2 codeName:(id)arg3 ;
-(BOOL)isBorderless;
-(ipp_sRef)createMediaColAndDoMargins:(BOOL)arg1 ;
-(BOOL)isEqualSize:(id)arg1 ;
-(long long)sizeAndImageableCompare:(id)arg1 ;
-(long long)sizeMediaTypeAndImageableCompare:(id)arg1 ;
-(id)paperWithMarginsAdjustedForDuplexMode:(id)arg1 ;
-(BOOL)isTransverse;
@end

