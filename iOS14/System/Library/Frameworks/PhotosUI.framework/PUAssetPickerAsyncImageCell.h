/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSUUID, UIImageView;


@protocol PUAssetPickerAsyncImageCell <NSObject>
@property (nonatomic,retain) NSUUID * asyncRequestID; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (assign,nonatomic) int imageRequestID; 
@property (nonatomic,readonly) CGSize imageRequestSize; 
@required
-(UIImageView *)imageView;
-(NSUUID *)asyncRequestID;
-(void)setAsyncRequestID:(id)arg1;
-(int)imageRequestID;
-(void)setImageRequestID:(int)arg1;
-(CGSize)imageRequestSize;

@end

