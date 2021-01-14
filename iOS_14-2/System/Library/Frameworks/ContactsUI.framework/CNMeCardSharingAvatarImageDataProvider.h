/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class NSData;


@protocol CNMeCardSharingAvatarImageDataProvider <NSObject>
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) CGRect cropRect; 
@property (nonatomic,readonly) NSData * thumbnailImageData; 
@required
-(CGRect)cropRect;
-(NSData *)imageData;
-(NSData *)thumbnailImageData;

@end

