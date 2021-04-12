/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBApplicationLaunchImageParameters : NSObject {

	NSString* _defaultPNGName;
	NSString* _extension;
	NSString* _minOSVersionString;
	CGSize _size;
	long long _interfaceOrientation;

}

@property (nonatomic,copy,readonly) NSString * defaultPNGName;                  //@synthesize defaultPNGName=_defaultPNGName - In the implementation block
@property (nonatomic,copy,readonly) NSString * extension;                       //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy,readonly) NSString * minOSVersionString;              //@synthesize minOSVersionString=_minOSVersionString - In the implementation block
@property (nonatomic,readonly) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                  //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(id)launchImageParametersFromLaunchImagesInfo:(id)arg1 withBundleIdentifier:(id)arg2 isMonarchLinked:(BOOL)arg3 ;
+(id)validInfoPlistOrientationKeys;
+(id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id*)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGSize)size;
-(long long)interfaceOrientation;
-(NSString *)defaultPNGName;
-(NSString *)extension;
-(id)_initWithDefaultPNGName:(id)arg1 extension:(id)arg2 minOSVersionString:(id)arg3 size:(CGSize)arg4 interfaceOrientation:(long long)arg5 ;
-(NSString *)minOSVersionString;
@end

