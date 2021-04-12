/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {

	AVChapterMetadataItemInternal* _privChapter;

}
-(id)dataType;
-(void)cancelLoading;
-(SCD_Struct_AV6)time;
-(id)locale;
-(id)keySpace;
-(id)init;
-(id)startDate;
-(id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 extendedLanguageTag:(id)arg5 languageCode:(id)arg6 chapterDataType:(id)arg7 time:(SCD_Struct_AV6)arg8 duration:(SCD_Struct_AV6)arg9 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)languageCode;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)extendedLanguageTag;
-(void)_removeFigAssetNotifications;
-(id)commonKey;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addFigAssetNotifications;
-(long long)_valueStatus;
-(id)key;
-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(void)_ensureValueLoadedSync;
-(void)_takeValueFrom:(id)arg1 ;
-(void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(long long)_chapterGroupIndex;
-(long long)_chapterIndex;
-(SCD_Struct_AV6)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)extraAttributes;
-(id)value;
-(void)dealloc;
@end

