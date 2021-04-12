/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)init;
-(CGSize)size;
-(NSString *)defaultPNGName;
-(id)description;
-(long long)interfaceOrientation;
-(NSString *)extension;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)minOSVersionString;
@end

