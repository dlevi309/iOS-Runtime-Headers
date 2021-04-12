/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationAttachmentOptions.h>
#import <libobjc.A.dylib/UNNotificationAttachmentThumbnailOptions.h>

@class NSNumber, NSString;

@interface UNImageNotificationAttachmentOptions : UNNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions> {

	BOOL _thumbnailHidden;
	BOOL _hiddenFromDefaultExpandedView;
	NSNumber* _thumbnailFrameNumber;
	CGRect _thumbnailClippingRect;

}

@property (nonatomic,readonly) BOOL hiddenFromDefaultExpandedView;                //@synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * thumbnailFrameNumber;              //@synthesize thumbnailFrameNumber=_thumbnailFrameNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL thumbnailHidden;                              //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (nonatomic,readonly) CGRect thumbnailClippingRect;                      //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionsFromOptionsDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)thumbnailClippingRect;
-(BOOL)thumbnailHidden;
-(id)initWithThumbnailHidden:(BOOL)arg1 thumbnailClippingRect:(CGRect)arg2 thumbnailFrameNumber:(id)arg3 hiddenFromDefaultExpandedView:(BOOL)arg4 ;
-(NSNumber *)thumbnailFrameNumber;
-(BOOL)hiddenFromDefaultExpandedView;
@end

