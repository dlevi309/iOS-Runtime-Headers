/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSData, NSArray;

@interface _CUIThemeSVGRendition : CUIThemeRendition {

	CGSVGDocumentRef _svgDocument;
	NSData* _fileData;
	unsigned _standardPointSize;
	NSArray* _vectorSizes;
	double _baseline;
	double _capline;
	SCD_Struct_CS11 _alignmentRectInsets;
	BOOL _isAlignmentRect;
	CGSize _canvasSize;
	os_unfair_lock_s _lock;

}
-(void)dealloc;
-(int)pixelFormat;
-(id)metrics;
-(CGSVGDocumentRef)svgDocument;
-(CGSize)canvasSize;
-(id)rawData;
-(double)vectorGlyphBaseline;
-(double)vectorGlyphCapLine;
-(double)vectorGlyphReferencePointSize;
-(id)vectorGlyphAvailableSizes;
-(SCD_Struct_CS11)vectorGlyphAlignmentRectInsets;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(CGSVGDocumentRef)_nts_svgDocument;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
@end

