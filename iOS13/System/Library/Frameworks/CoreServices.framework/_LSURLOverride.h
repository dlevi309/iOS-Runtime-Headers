/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSURL;

@interface _LSURLOverride : NSObject {

	NSURL* _originalURL;
	NSURL* _overrideURL;

}

@property (nonatomic,readonly) NSURL * originalURL;                   //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * overrideURL;              //@synthesize overrideURL=_overrideURL - In the implementation block
+(id)new;
+(void)addOverrideBlock:(/*^block*/id)arg1 ;
+(void)removeAllOverrideBlocks;
+(void)setUseMacOverrides:(BOOL)arg1 ;
+(void)resetPlatformFlag;
+(id)fmfURL:(State*)arg1 ;
+(id)fmipURL:(State*)arg1 ;
+(id)iTunesStoreURL:(State*)arg1 ;
+(id)iCloudEmailPrefsURL:(State*)arg1 ;
+(id)photosURL:(State*)arg1 ;
+(id)keynoteLiveURL:(State*)arg1 ;
+(id)keynoteLiveURL_noFragment:(State*)arg1 ;
+(id)iCloudSharingURL:(State*)arg1 ;
+(id)iCloudSharingURL_noFragment:(State*)arg1 ;
+(id)iCloudFamilyURL:(State*)arg1 ;
+(id)bizURL:(State*)arg1 ;
+(id)iCloudSchoolworkURL:(State*)arg1 ;
-(id)init;
-(id)initWithOriginalURL:(id)arg1 checkingForAvailableApplications:(BOOL)arg2 newsOnly:(BOOL)arg3 ;
-(id)initWithOriginalURL:(id)arg1 checkingForAvailableApplications:(BOOL)arg2 ;
-(id)initWithOriginalURL:(id)arg1 newsOnly:(BOOL)arg2 ;
-(id)initWithOriginalURL:(id)arg1 ;
-(NSURL *)originalURL;
-(NSURL *)overrideURL;
@end

