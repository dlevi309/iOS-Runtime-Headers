/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasEffects;
-(BOOL)rightToLeft;
-(void)setStyle:(id)arg1 ;
-(id)effects;
-(BOOL)lastRow;
-(BOOL)bandRow;
-(id)initWithDefaults;
-(id)style;
-(BOOL)firstColumn;
-(void)setEffects:(id)arg1 ;
-(BOOL)lastColumn;
-(BOOL)firstRow;
-(void)setLastColumn:(BOOL)arg1 ;
-(void)setFirstColumn:(BOOL)arg1 ;
-(void)setFirstRow:(BOOL)arg1 ;
-(void)setLastRow:(BOOL)arg1 ;
-(void)setBandColumn:(BOOL)arg1 ;
-(void)setBandRow:(BOOL)arg1 ;
-(void)setRightToLeft:(BOOL)arg1 ;
-(BOOL)bandColumn;
-(BOOL)hasBandsNormalToDir:(int)arg1 ;
-(BOOL)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 ;
@end

