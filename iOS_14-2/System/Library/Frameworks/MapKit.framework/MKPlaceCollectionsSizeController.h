/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCollectionsSizeProvider.h>

@class NSString;

@interface MKPlaceCollectionsSizeController : NSObject <MKCollectionsSizeProvider> {

	BOOL _isSingleCollection;
	BOOL _isMarzipan;
	double _defaultCollectionHeight;
	double _defaultCollectionWidth;
	SCD_Struct_MK21 _collectionsConfiguration;
	UIEdgeInsets _sectionInset;

}

@property (assign,nonatomic) UIEdgeInsets sectionInset;                             //@synthesize sectionInset=_sectionInset - In the implementation block
@property (assign,nonatomic) double defaultCollectionHeight;                        //@synthesize defaultCollectionHeight=_defaultCollectionHeight - In the implementation block
@property (assign,nonatomic) double defaultCollectionWidth;                         //@synthesize defaultCollectionWidth=_defaultCollectionWidth - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK21 collectionsConfiguration;              //@synthesize collectionsConfiguration=_collectionsConfiguration - In the implementation block
@property (assign,nonatomic) BOOL isSingleCollection;                               //@synthesize isSingleCollection=_isSingleCollection - In the implementation block
@property (assign,nonatomic) BOOL isMarzipan;                                       //@synthesize isMarzipan=_isMarzipan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMarzipan;
-(void)setDefaultCollectionWidth:(double)arg1 ;
-(void)setDefaultCollectionHeight:(double)arg1 ;
-(SCD_Struct_MK21)collectionsConfiguration;
-(double)defaultCollectionHeight;
-(double)defaultCollectionWidth;
-(void)setCollectionsConfiguration:(SCD_Struct_MK21)arg1 ;
-(BOOL)isSingleCollection;
-(void)setIsSingleCollection:(BOOL)arg1 ;
-(void)setIsMarzipan:(BOOL)arg1 ;
-(UIEdgeInsets)sectionInset;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(id)initWithCollectionsConfiguration:(SCD_Struct_MK21)arg1 isSingleCollection:(BOOL)arg2 usingTraitCollections:(id)arg3 ;
-(UIEdgeInsets)sectionInsets;
-(CGSize)sizeForCollectionWithMaxCollectionsWidth:(double)arg1 ;
-(double)minimumInterItemSpacing;
-(id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)arg1 ;
-(double)minimumLineSpacing;
@end

