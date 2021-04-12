/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>

@class OADTableStyle, NSArray, NSString;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {

	OADTableStyle* mStyle;
	BOOL mRightToLeft;
	BOOL mFirstRow;
	BOOL mFirstColumn;
	BOOL mLastRow;
	BOOL mLastColumn;
	BOOL mBandRow;
	BOOL mBandColumn;
	NSArray* mEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProperties;
-(NSString *)description;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(id)initWithDefaults;
-(BOOL)rightToLeft;
-(BOOL)hasEffects;
-(BOOL)firstColumn;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(BOOL)lastColumn;
-(BOOL)firstRow;
-(BOOL)lastRow;
-(void)setLastColumn:(BOOL)arg1 ;
-(void)setFirstColumn:(BOOL)arg1 ;
-(BOOL)bandRow;
-(void)setFirstRow:(BOOL)arg1 ;
-(void)setLastRow:(BOOL)arg1 ;
-(void)setBandColumn:(BOOL)arg1 ;
-(void)setBandRow:(BOOL)arg1 ;
-(void)setRightToLeft:(BOOL)arg1 ;
-(BOOL)bandColumn;
-(BOOL)hasBandsNormalToDir:(int)arg1 ;
-(BOOL)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 ;
@end

