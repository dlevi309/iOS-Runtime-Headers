/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class NSString, UIImage, NSURL;


@protocol AVTStickerRecentsItem <AVTDiscardableContent>
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy,readonly) id provider; 
@required
-(NSString *)localizedDescription;
-(NSURL *)url;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(void)setUrl:(id)arg1;
-(id)provider;
-(id)cellIdentifier;

@end

