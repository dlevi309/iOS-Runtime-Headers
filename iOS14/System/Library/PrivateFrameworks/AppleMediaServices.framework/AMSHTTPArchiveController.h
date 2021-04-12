/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSHTTPArchiveController : NSObject
+(void)initialize;
+(void)setRemoveDisabled:(BOOL)arg1 ;
+(id)harURLFilters;
+(void)_writeHTTPArchivesToDiskCompressed:(BOOL)arg1 ;
+(id)maxBufferSizeOverride;
+(BOOL)_shouldAddRequest:(id)arg1 ;
+(void)setMaxBufferSizeOverride:(id)arg1 ;
+(void)_updateHarFileFilters;
+(BOOL)_disabled;
+(id)buffer;
+(BOOL)isRemoveDisabled;
+(void)addHTTPArchive:(id)arg1 ;
+(void)_updateMaxBufferSize;
+(id)_harURLFilters;
@end

