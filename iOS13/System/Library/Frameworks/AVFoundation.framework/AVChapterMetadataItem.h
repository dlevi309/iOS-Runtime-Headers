/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {

	AVChapterMetadataItemInternal* _privChapter;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)key;
-(id)locale;
-(id)languageCode;
-(id)value;
-(id)startDate;
-(SCD_Struct_AV7)duration;
-(SCD_Struct_AV7)time;
-(id)dataType;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)extendedLanguageTag;
-(void)cancelLoading;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)keySpace;
-(id)extraAttributes;
-(id)commonKey;
-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(long long)_valueStatus;
-(id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 extendedLanguageTag:(id)arg5 languageCode:(id)arg6 chapterDataType:(id)arg7 time:(SCD_Struct_AV7)arg8 duration:(SCD_Struct_AV7)arg9 ;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(void)_ensureValueLoadedSync;
-(void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(void)_takeValueFrom:(id)arg1 ;
-(long long)_chapterGroupIndex;
-(long long)_chapterIndex;
@end

