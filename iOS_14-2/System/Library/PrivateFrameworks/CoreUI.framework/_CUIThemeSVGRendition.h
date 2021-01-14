/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSData, NSArray;

@interface _CUIThemeSVGRendition : CUIThemeRendition <NSLocking> {

	CGSVGDocumentRef _svgDocument;
	NSData* _fileData;
	unsigned _standardPointSize;
	NSArray* _vectorSizes;
	double _baseline;
	double _capline;
	SCD_Struct_CS11 _alignmentRectInsets;
	BOOL _isAlignmentRect;
	CGSize _canvasSize;
	float _templateVersion;
	os_unfair_lock_s _lock;

}
-(void)unlock;
-(id)metrics;
-(double)vectorGlyphCapLine;
-(int)pixelFormat;
-(id)vectorGlyphAvailableSizes;
-(id)rawData;
-(float)vectorGlyphTemplateVersion;
-(SCD_Struct_CS11)vectorGlyphAlignmentRectInsets;
-(void)lock;
-(double)vectorGlyphReferencePointSize;
-(CGSVGDocumentRef)svgDocument;
-(double)vectorGlyphBaseline;
-(CGSize)canvasSize;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)dealloc;
@end

