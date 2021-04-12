/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKEnumeratableFaceCollection.h>

@protocol NTKCGalleryCollectionDelegate;
@class NSString;

@interface NTKCGalleryCollection : NSObject <NTKEnumeratableFaceCollection> {

	NSString* _title;
	/*^block*/id _calloutName;
	NSString* _descriptionText;
	id<NTKCGalleryCollectionDelegate> _delegate;

}

@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) id calloutName;                                                   //@synthesize calloutName=_calloutName - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCGalleryCollectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canAddNewFaces; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_explorerFacesForDevice:(id)arg1 ;
+(id)_modularFacesForDevice:(id)arg1 ;
+(id)_utilityFacesForDevice:(id)arg1 ;
+(id)_activityFacesForDevice:(id)arg1 ;
+(id)_simpleFacesForDevice:(id)arg1 ;
+(id)_motionFacesForDevice:(id)arg1 ;
+(id)_colorFacesForDevice:(id)arg1 ;
+(id)_chronographFacesForDevice:(id)arg1 ;
+(id)_numeralsFacesForDevice:(id)arg1 ;
+(id)_astronomyFacesForDevice:(id)arg1 ;
+(id)_timelapseFacesForDevice:(id)arg1 ;
+(id)_solarFacesForDevice:(id)arg1 ;
+(id)_extraLargeFacesForDevice:(id)arg1 ;
+(id)_upNextFacesForDevice:(id)arg1 ;
+(id)_kaleidoscopeFacesForDevice:(id)arg1 ;
+(id)_whistlerAnalogFacesForDevice:(id)arg1 ;
+(id)_whistlerDigitalFacesForDevice:(id)arg1 ;
+(id)_breatheFacesForDevice:(id)arg1 ;
+(id)_smokeFacesForDevice:(id)arg1 ;
+(id)_metallicFacesForDevice:(id)arg1 ;
+(id)_fireWaterFacesForDevice:(id)arg1 ;
+(id)_spectrumAnalogFacesForDevice:(id)arg1 ;
+(id)_whistlerSubdialsFacesForDevice:(id)arg1 ;
+(id)_californiaFacesForDevice:(id)arg1 ;
+(id)_blackcombFacesForDevice:(id)arg1 ;
+(id)_bigNumeralsAnalogFacesForDevice:(id)arg1 ;
+(id)_bigNumeralsDigitalFacesForDevice:(id)arg1 ;
+(id)_photoFacesForDevice:(id)arg1 ;
+(id)_mickeyAndMinnieFacesForDevice:(id)arg1 ;
+(id)_infinityFacesForDevice:(id)arg1 ;
+(id)_prideFacesForDevice:(id)arg1 ;
+(id)_victoryDigitalFacesForDevice:(id)arg1 ;
+(id)_victoryAnalogFacesForDevice:(id)arg1 ;
+(id)_olympusFacesForDevice:(id)arg1 ;
+(id)_zeusFacesForDevice:(id)arg1 ;
+(id)_spectrumZeusFacesForDevice:(id)arg1 ;
+(id)_newFacesExcludingRestrictedForDevice:(id)arg1 ;
+(id)_newFacesForDevice:(id)arg1 ;
+(id)galleryCollectionsForDevice:(id)arg1 ;
+(id)_galleryCollectionForDevice:(id)arg1 withCollectionIdentifier:(id)arg2 title:(id)arg3 calloutName:(/*^block*/id)arg4 ;
-(unsigned long long)numberOfFaces;
-(id<NTKCGalleryCollectionDelegate>)delegate;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDelegate:(id<NTKCGalleryCollectionDelegate>)arg1 ;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(id)newFace;
-(NSString *)title;
-(void)setCalloutName:(id)arg1 ;
-(void)enumerateFaceNamesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfFace:(id)arg1 ;
-(id)calloutName;
-(BOOL)canAddNewFaces;
@end

