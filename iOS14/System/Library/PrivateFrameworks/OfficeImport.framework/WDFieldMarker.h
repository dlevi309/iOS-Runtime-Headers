/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class NSData;

@interface WDFieldMarker : WDRunWithCharacterProperties {

	int mFieldPosition;
	int mMarkerType;
	unsigned char mFieldType;
	NSData* mData;
	unsigned mZombieEmbed : 1;
	unsigned mResultDirty : 1;
	unsigned mResultEdited : 1;
	unsigned mLocked : 1;
	unsigned mPrivateResult : 1;
	unsigned mNested : 1;
	unsigned mHasSeparator : 1;

}
-(BOOL)locked;
-(BOOL)hasSeparator;
-(void)setHasSeparator:(BOOL)arg1 ;
-(void)setData:(id)arg1 ;
-(id)description;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)nested;
-(id)data;
-(unsigned char)fieldType;
-(int)runType;
-(void)setFieldType:(unsigned char)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(int)fieldMarkerType;
-(void)setFieldPosition:(int)arg1 ;
-(void)setFieldMarkerType:(int)arg1 ;
-(int)fieldPosition;
-(BOOL)zombieEmbed;
-(void)setZombieEmbed:(BOOL)arg1 ;
-(BOOL)resultDirty;
-(void)setResultDirty:(BOOL)arg1 ;
-(BOOL)resultEdited;
-(void)setResultEdited:(BOOL)arg1 ;
-(BOOL)privateResult;
-(void)setPrivateResult:(BOOL)arg1 ;
-(void)setNested:(BOOL)arg1 ;
@end

