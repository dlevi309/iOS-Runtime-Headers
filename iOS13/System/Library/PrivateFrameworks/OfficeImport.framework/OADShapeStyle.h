/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADStyleMatrixReference, OADFontReference;

@interface OADShapeStyle : NSObject <NSCopying> {

	OADStyleMatrixReference* mLineReference;
	OADStyleMatrixReference* mFillReference;
	OADStyleMatrixReference* mEffectReference;
	OADFontReference* mFontReference;

}
+(id)defaultShapeStyle;
+(id)defaultOfficeShapeStyle;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 ;
-(void)applyToTextBody:(id)arg1 ;
-(void)setLineReference:(id)arg1 ;
-(void)setFillReference:(id)arg1 ;
-(void)setEffectReference:(id)arg1 ;
-(void)setFontReference:(id)arg1 ;
-(void)applyToTextListStyle:(id)arg1 ;
-(void)applyToParagraphProperties:(id)arg1 ;
-(void)setLineMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)setFillMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)setEffectMatrixIndex:(unsigned)arg1 color:(id)arg2 ;
-(void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(BOOL)arg3 strokeWidthMultiplier:(float)arg4 ;
-(id)lineReference;
-(id)fillReference;
-(id)effectReference;
-(id)fontReference;
@end

