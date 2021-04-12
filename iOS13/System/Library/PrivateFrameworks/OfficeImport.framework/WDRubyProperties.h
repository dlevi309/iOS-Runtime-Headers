/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WDRubyProperties : NSObject {

	unsigned mOriginal : 1;
	SCD_Struct_WD118* mOriginalProperties;

}

@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) unsigned short phoneticGuideFontSize; 
@property (assign,nonatomic) unsigned short baseFontSize; 
@property (assign,nonatomic) unsigned short distanceBetween; 
@property (assign,nonatomic) int phoneticGuideLanguage; 
-(id)init;
-(void)dealloc;
-(id)description;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(unsigned short)baseFontSize;
-(BOOL)isAnythingOverridden;
-(BOOL)isAlignmentOverridden;
-(BOOL)isAnythingOverriddenIn:(SCD_Struct_WD118*)arg1 ;
-(void)clearAlignment;
-(unsigned short)phoneticGuideFontSize;
-(void)setPhoneticGuideFontSize:(unsigned short)arg1 ;
-(BOOL)isPhoneticGuideFontSizeOverridden;
-(void)clearPhoneticGuideFontSize;
-(void)setBaseFontSize:(unsigned short)arg1 ;
-(BOOL)isBaseFontSizeOverridden;
-(void)clearBaseFontSize;
-(unsigned short)distanceBetween;
-(void)setDistanceBetween:(unsigned short)arg1 ;
-(BOOL)isDistanceBetweenOverridden;
-(void)clearDistanceBetween;
-(int)phoneticGuideLanguage;
-(void)setPhoneticGuideLanguage:(int)arg1 ;
-(BOOL)isPhoneticGuideLanguageOverridden;
-(void)clearPhoneticGuideLanguage;
@end

