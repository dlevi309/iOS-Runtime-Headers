/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariSharedUI/WBSFaviconProvider.h>

@class NSCache;

@interface _SFFaviconProvider : WBSFaviconProvider {

	NSCache* _monogramTitleToImageCache;

}
-(id)fallbackIconForRequest:(id)arg1 ;
-(id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(BOOL)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(/*^block*/id)arg7 ;
@end

