/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class CRImage, NSMutableDictionary;

@interface CRRecognizerCache : NSObject {

	CRImage* _image;
	NSMutableDictionary* _initialSubRegions;
	NSMutableDictionary* _indexedSubRegions;

}

@property (retain) CRImage * image;                                      //@synthesize image=_image - In the implementation block
@property (retain) NSMutableDictionary * initialSubRegions;              //@synthesize initialSubRegions=_initialSubRegions - In the implementation block
@property (retain) NSMutableDictionary * indexedSubRegions;              //@synthesize indexedSubRegions=_indexedSubRegions - In the implementation block
-(CRImage *)image;
-(void)setImage:(CRImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 initialTextFeatures:(id)arg2 ;
-(void)setInitialSubRegions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)initialSubRegions;
-(void)setIndexedSubRegions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)indexedSubRegions;
-(void)addRegion:(CGRect)arg1 withSwt:(id)arg2 ;
-(id)subFeatureForRegion:(CGRect)arg1 ;
@end

