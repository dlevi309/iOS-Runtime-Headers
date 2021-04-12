/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationAttachmentOptions.h>
#import <libobjc.A.dylib/UNNotificationAttachmentThumbnailOptions.h>

@class NSString;

@interface UNMovieNotificationAttachmentOptions : UNNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions> {

	BOOL _thumbnailHidden;
	SCD_Struct_UN3 _thumbnailTimestamp;
	CGRect _thumbnailClippingRect;

}

@property (nonatomic,readonly) SCD_Struct_UN3 thumbnailTimestamp;              //@synthesize thumbnailTimestamp=_thumbnailTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL thumbnailHidden;                           //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (nonatomic,readonly) CGRect thumbnailClippingRect;                   //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionsFromOptionsDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithThumbnailHidden:(BOOL)arg1 thumbnailClippingRect:(CGRect)arg2 thumbnailTimestamp:(SCD_Struct_UN3)arg3 ;
-(CGRect)thumbnailClippingRect;
-(SCD_Struct_UN3)thumbnailTimestamp;
-(BOOL)thumbnailHidden;
@end

