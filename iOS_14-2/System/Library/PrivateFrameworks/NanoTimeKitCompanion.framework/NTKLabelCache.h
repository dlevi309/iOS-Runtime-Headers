/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSArray, NSString;

@interface NTKLabelCache : NSObject {

	NSArray* _supportedLanguageCodes;
	NSString* _currentLanguageCode;

}
+(id)sharedCache;
-(id)init;
-(BOOL)_localeChanged;
-(BOOL)setCurrentLanguageCode:(id)arg1 ;
-(void)dealloc;
-(void)_legacy_removeOldAtlases;
-(id)_loadTextureForDevice:(id)arg1 withName:(id)arg2 ;
-(id)_nameForFaceStyle:(long long)arg1 ;
-(BOOL)forceLocaleUpdate;
-(id)labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(BOOL)arg5 filter:(BOOL)arg6 ;
-(id)labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(BOOL)arg5 ;
@end

