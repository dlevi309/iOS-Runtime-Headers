/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(void)setHasSeparator:(BOOL)arg1 ;
-(BOOL)hasSeparator;
-(unsigned char)fieldType;
-(void)setFieldType:(unsigned char)arg1 ;
-(BOOL)locked;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)nested;
-(void)setNested:(BOOL)arg1 ;
-(int)fieldMarkerType;
-(int)runType;
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
@end

