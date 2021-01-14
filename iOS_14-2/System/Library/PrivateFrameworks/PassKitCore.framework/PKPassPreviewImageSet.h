/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPreviewImageSet : PKPassImageSet {

	PKImage* _iconImage;
	PKImage* _notificationIconImage;
	PKImage* _rawIcon;

}

@property (nonatomic,retain) PKImage * iconImage;                          //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) PKImage * notificationIconImage;              //@synthesize notificationIconImage=_notificationIconImage - In the implementation block
@property (nonatomic,retain) PKImage * rawIcon;                            //@synthesize rawIcon=_rawIcon - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned)currentVersion;
+(id)archiveName;
+(long long)imageSetType;
-(PKImage *)iconImage;
-(void)setRawIcon:(PKImage *)arg1 ;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKImage *)rawIcon;
-(void)setNotificationIconImage:(PKImage *)arg1 ;
-(void)setIconImage:(PKImage *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)notificationIconImage;
-(BOOL)isEqual:(id)arg1 ;
@end

