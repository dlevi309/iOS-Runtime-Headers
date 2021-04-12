/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSArray, NSString;

@interface NTKLabelCache : NSObject {

	NSArray* _supportedLanguageCodes;
	NSString* _currentLanguageCode;

}
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(BOOL)setCurrentLanguageCode:(id)arg1 ;
-(BOOL)_localeChanged;
-(void)_legacy_removeOldAtlases;
-(id)_loadTextureForDevice:(id)arg1 withName:(id)arg2 ;
-(id)_nameForFaceStyle:(long long)arg1 ;
-(BOOL)forceLocaleUpdate;
-(id)labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(BOOL)arg5 filter:(BOOL)arg6 ;
-(id)labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(BOOL)arg5 ;
@end

