/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(long long)imageSetType;
+(id)archiveName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)iconImage;
-(void)setIconImage:(PKImage *)arg1 ;
-(PKImage *)rawIcon;
-(PKImage *)notificationIconImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setNotificationIconImage:(PKImage *)arg1 ;
-(void)setRawIcon:(PKImage *)arg1 ;
@end

