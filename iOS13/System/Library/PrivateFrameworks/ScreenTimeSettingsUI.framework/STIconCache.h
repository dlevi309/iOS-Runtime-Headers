/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@protocol OS_dispatch_queue;
#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
@class NSCache, CNMonogrammer, NSPersonNameComponentsFormatter, NSObject, NSURLSession, NSMutableSet, UIImage;

@interface STIconCache : NSObject {

	NSCache* _iconByKeyCache;
	CNMonogrammer* _monogrammer;
	NSPersonNameComponentsFormatter* _personNameComponentsFormatter;
	NSObject*<OS_dispatch_queue> _lookupQueue;
	NSURLSession* _urlSession;
	NSMutableSet* _bundleIdentifiersWithPendingRequests;

}

@property (nonatomic,retain) CNMonogrammer * monogrammer;                                                  //@synthesize monogrammer=_monogrammer - In the implementation block
@property (nonatomic,retain) NSPersonNameComponentsFormatter * personNameComponentsFormatter;              //@synthesize personNameComponentsFormatter=_personNameComponentsFormatter - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> lookupQueue;                                   //@synthesize lookupQueue=_lookupQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                                                  //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) NSMutableSet * bundleIdentifiersWithPendingRequests;                        //@synthesize bundleIdentifiersWithPendingRequests=_bundleIdentifiersWithPendingRequests - In the implementation block
@property (readonly) UIImage * imageForBlankApplicationIcon; 
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(NSURLSession *)urlSession;
-(CNMonogrammer *)monogrammer;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)lookupQueue;
-(NSMutableSet *)bundleIdentifiersWithPendingRequests;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3 ;
-(void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)blankSpaceImageWithSize:(CGSize)arg1 ;
-(id)imageForCategoryIdentifier:(id)arg1 ;
-(id)imageForBundleIdentifier:(id)arg1 ;
-(UIImage *)imageForBlankApplicationIcon;
-(id)personImageWithDSID:(id)arg1 fullName:(id)arg2 ;
-(void)_fetchImageForAppInfoIfNeeded:(id)arg1 ;
-(void)_handleiTunesResponseForAppInfo:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 ;
-(void)_updateCacheWithImage:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)_newCircleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4 ;
-(id)_personImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSPersonNameComponentsFormatter *)personNameComponentsFormatter;
-(id)monogramImageForNameComponents:(id)arg1 ;
-(void)_fetchFamilyPhotoWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_updateCacheWithImage:(id)arg1 dsid:(id)arg2 ;
-(id)circleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4 ;
-(id)roundedImageForImageWithName:(id)arg1 ;
-(void)fetchPersonImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setPersonNameComponentsFormatter:(NSPersonNameComponentsFormatter *)arg1 ;
@end

