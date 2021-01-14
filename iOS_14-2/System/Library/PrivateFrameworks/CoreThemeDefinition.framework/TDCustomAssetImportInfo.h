/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@protocol TDCustomAssetSource;
#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class CUIRenditionKey, NSString, NSObject, NSDate;

@interface TDCustomAssetImportInfo : NSObject {

	BOOL _optOutOfThinning;
	CUIRenditionKey* _renditionKey;
	NSString* _elementName;
	NSString* _partName;
	NSObject*<TDCustomAssetSource> _customAsset;
	NSDate* _modificationDate;
	long long _renditionType;
	long long _resizingMode;
	long long _templateRenderingMode;
	NSString* _name;
	CGSize _resizableSliceSize;
	SCD_Struct_TD15 _sliceInsets;
	CGRect _alignmentRect;

}

@property (nonatomic,copy) CUIRenditionKey * renditionKey;                  //@synthesize renditionKey=_renditionKey - In the implementation block
@property (nonatomic,copy) NSString * elementName;                          //@synthesize elementName=_elementName - In the implementation block
@property (nonatomic,copy) NSString * partName;                             //@synthesize partName=_partName - In the implementation block
@property (retain) NSObject*<TDCustomAssetSource> customAsset;              //@synthesize customAsset=_customAsset - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) SCD_Struct_TD15 sliceInsets;                   //@synthesize sliceInsets=_sliceInsets - In the implementation block
@property (assign,nonatomic) long long renditionType;                       //@synthesize renditionType=_renditionType - In the implementation block
@property (assign,nonatomic) long long resizingMode;                        //@synthesize resizingMode=_resizingMode - In the implementation block
@property (assign,nonatomic) CGSize resizableSliceSize;                     //@synthesize resizableSliceSize=_resizableSliceSize - In the implementation block
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) long long templateRenderingMode;               //@synthesize templateRenderingMode=_templateRenderingMode - In the implementation block
@property (assign,nonatomic) BOOL optOutOfThinning;                         //@synthesize optOutOfThinning=_optOutOfThinning - In the implementation block
@property (assign,nonatomic) CGRect alignmentRect;                          //@synthesize alignmentRect=_alignmentRect - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
-(NSDate *)modificationDate;
-(void)setResizingMode:(long long)arg1 ;
-(long long)renditionType;
-(BOOL)optOutOfThinning;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(void)setOptOutOfThinning:(BOOL)arg1 ;
-(BOOL)isTemplate;
-(NSString *)elementName;
-(long long)resizingMode;
-(CGRect)alignmentRect;
-(long long)templateRenderingMode;
-(NSString *)name;
-(CUIRenditionKey *)renditionKey;
-(NSString *)partName;
-(void)setTemplateRenderingMode:(long long)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setPartName:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIsTemplate:(BOOL)arg1 ;
-(void)setElementName:(NSString *)arg1 ;
-(void)dealloc;
-(void)setRenditionType:(long long)arg1 ;
-(long long)renditionSubtype;
-(SCD_Struct_TD15)sliceInsets;
-(CGSize)resizableSliceSize;
-(NSObject*<TDCustomAssetSource>)customAsset;
-(void)setSliceInsets:(SCD_Struct_TD15)arg1 ;
-(void)setResizableSliceSize:(CGSize)arg1 ;
-(void)setRenditionKey:(CUIRenditionKey *)arg1 ;
-(void)setCustomAsset:(NSObject*<TDCustomAssetSource>)arg1 ;
@end

