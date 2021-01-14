/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/CPAnalyticsPhotoKitPropertyProvider.h>

@class PHPhotoLibrary, NSString;

@interface PHCPAnalyticsCachedPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider> {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(void)registerSystemProperties:(id)arg1 ;
-(id)_cachedProperties;
-(id)_librarySizeRange:(long long)arg1 ;
@end

