/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@class NSMutableDictionary, NSSet;

@interface BRRemoteUserDefaults : NSObject {

	NSMutableDictionary* _userDictionaryCache;

}

@property (nonatomic,readonly) NSSet * excludedFilenamesWorthWarningAtLogout; 
@property (nonatomic,readonly) NSSet * excludedExtensionsWorthPreserving; 
@property (nonatomic,readonly) long long minFileSizeForThumbnailTransfer; 
+(id)sharedDefaults;
+(id)defaultExcludedFilenamesWorthWarningAtLogout;
+(id)defaultExcludedExtensionsWorthPreserving;
+(id)defaultExcludedFilenamesWorthPreserving;
-(id)init;
-(id)_init;
-(NSSet *)excludedFilenamesWorthWarningAtLogout;
-(NSSet *)excludedExtensionsWorthPreserving;
-(long long)minFileSizeForThumbnailTransfer;
@end

