/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarListItem.h>

@class UIImage, NSString;

@interface AVTAvatarListImageItem : NSObject <AVTAvatarListItem> {

	UIImage* _image;
	NSString* _title;

}

@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImage:(id)arg1 title:(id)arg2 ;
-(UIImage *)image;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 imageHandler:(/*^block*/id)arg2 viewHandler:(/*^block*/id)arg3 ;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 viewHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

