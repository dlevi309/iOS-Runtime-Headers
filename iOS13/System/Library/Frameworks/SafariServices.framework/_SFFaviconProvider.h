/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariSharedUI/WBSFaviconProvider.h>

@class NSCache;

@interface _SFFaviconProvider : WBSFaviconProvider {

	NSCache* _monogramTitleToImageCache;

}
-(id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(BOOL)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(/*^block*/id)arg7 ;
-(id)fallbackIconForRequest:(id)arg1 ;
@end

