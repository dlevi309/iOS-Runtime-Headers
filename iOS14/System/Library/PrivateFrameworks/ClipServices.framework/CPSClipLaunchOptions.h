/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <ClipServices/ClipServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface CPSClipLaunchOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _skipsLaunching;
	BOOL _showsAppAttributionBanner;
	NSNumber* _userNotificationGranted;
	NSNumber* _locationConfirmationGranted;
	NSString* _predefinedBundleID;

}

@property (nonatomic,retain) NSNumber * userNotificationGranted;                  //@synthesize userNotificationGranted=_userNotificationGranted - In the implementation block
@property (nonatomic,retain) NSNumber * locationConfirmationGranted;              //@synthesize locationConfirmationGranted=_locationConfirmationGranted - In the implementation block
@property (nonatomic,copy) NSString * predefinedBundleID;                         //@synthesize predefinedBundleID=_predefinedBundleID - In the implementation block
@property (assign,nonatomic) BOOL skipsLaunching;                                 //@synthesize skipsLaunching=_skipsLaunching - In the implementation block
@property (assign,nonatomic) BOOL showsAppAttributionBanner;                      //@synthesize showsAppAttributionBanner=_showsAppAttributionBanner - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionsForAppClipRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)userNotificationGranted;
-(void)setUserNotificationGranted:(NSNumber *)arg1 ;
-(NSNumber *)locationConfirmationGranted;
-(void)setLocationConfirmationGranted:(NSNumber *)arg1 ;
-(void)setPredefinedBundleID:(NSString *)arg1 ;
-(void)setSkipsLaunching:(BOOL)arg1 ;
-(void)setShowsAppAttributionBanner:(BOOL)arg1 ;
-(NSString *)predefinedBundleID;
-(BOOL)skipsLaunching;
-(BOOL)showsAppAttributionBanner;
@end

