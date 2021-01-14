/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface MFPStringFormat : NSObject {

	int mAlignment;
	unsigned short mDigitSubstitutionLanguage;
	int mDigitSubstitutionMethod;
	unsigned mFormatFlags;
	int mHotkeyPrefix;
	int mLineAlignment;
	float mFirstTabOffset;
	int mTabStopCount;
	float* mTabStops;
	int mTrimming;

}
-(id)init;
-(int)alignment;
-(const float*)tabStops;
-(void)setAlignment:(int)arg1 ;
-(unsigned)formatFlags;
-(void)setFormatFlags:(unsigned)arg1 ;
-(void)setTrimming:(int)arg1 ;
-(void)dealloc;
-(void)setLineAlignment:(int)arg1 ;
-(void)setDigitSubstitutionLanguage:(unsigned short)arg1 ;
-(void)setDigitSubstitutionMethod:(int)arg1 ;
-(void)setFirstTabOffset:(float)arg1 ;
-(void)setHotkeyPrefix:(int)arg1 ;
-(void)setTabStops:(const float*)arg1 count:(int)arg2 ;
-(int)tabStopCount;
-(float)firstTabOffset;
-(int)lineAlignment;
-(int)trimming;
-(unsigned short)digitSubstitutionLanguage;
-(int)digitSubstitutionMethod;
-(int)hotkeyPrefix;
@end

