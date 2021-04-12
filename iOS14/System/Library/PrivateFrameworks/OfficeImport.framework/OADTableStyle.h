/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, OADTableBackground, OADTablePartStyle;

@interface OADTableStyle : NSObject {

	NSString* mName;
	NSString* mId;
	OADTableBackground* mBackground;
	OADTablePartStyle* mWholeTableStyle;
	OADTablePartStyle* mBand1HorzStyle;
	OADTablePartStyle* mBand2HorzStyle;
	OADTablePartStyle* mBand1VertStyle;
	OADTablePartStyle* mBand2VertStyle;
	OADTablePartStyle* mFirstRowStyle;
	OADTablePartStyle* mFirstColumnStyle;
	OADTablePartStyle* mLastRowStyle;
	OADTablePartStyle* mLastColumnStyle;
	OADTablePartStyle* mNorthEastStyle;
	OADTablePartStyle* mNorthWestStyle;
	OADTablePartStyle* mSouthEastStyle;
	OADTablePartStyle* mSouthWestStyle;

}
-(id)id;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(void)setId:(id)arg1 ;
-(id)name;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)firstRowStyle;
-(id)wholeTableStyle;
-(id)band1HorzStyle;
-(id)lastRowStyle;
-(void)setWholeTableStyle:(id)arg1 ;
-(void)setBand1HorzStyle:(id)arg1 ;
-(void)setBand2HorzStyle:(id)arg1 ;
-(void)setBand1VertStyle:(id)arg1 ;
-(void)setBand2VertStyle:(id)arg1 ;
-(void)setFirstRowStyle:(id)arg1 ;
-(void)setLastRowStyle:(id)arg1 ;
-(void)setFirstColumnStyle:(id)arg1 ;
-(void)setLastColumnStyle:(id)arg1 ;
-(void)setNorthEastStyle:(id)arg1 ;
-(void)setNorthWestStyle:(id)arg1 ;
-(void)setSouthEastStyle:(id)arg1 ;
-(void)setSouthWestStyle:(id)arg1 ;
-(id)band2HorzStyle;
-(id)band1VertStyle;
-(id)band2VertStyle;
-(id)firstColumnStyle;
-(id)lastColumnStyle;
-(id)northWestStyle;
-(id)northEastStyle;
-(id)southWestStyle;
-(id)southEastStyle;
-(id)partStyle:(int)arg1 ;
-(void)setStyle:(id)arg1 forPart:(int)arg2 ;
@end

