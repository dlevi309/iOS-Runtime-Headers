/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class NSString, UIImage, NSURL;


@protocol AVTStickerRecentsItem <AVTDiscardableContent>
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy,readonly) id provider; 
@required
-(void)setImage:(id)arg1;
-(id)provider;
-(id)cellIdentifier;
-(NSURL *)url;
-(UIImage *)image;
-(NSString *)localizedDescription;
-(void)setUrl:(id)arg1;

@end

