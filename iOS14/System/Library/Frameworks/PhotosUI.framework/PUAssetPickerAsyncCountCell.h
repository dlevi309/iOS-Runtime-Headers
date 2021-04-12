/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSUUID, UILabel;


@protocol PUAssetPickerAsyncCountCell <NSObject>
@property (nonatomic,retain) NSUUID * asyncRequestID; 
@property (nonatomic,readonly) UILabel * countLabel; 
@required
-(NSUUID *)asyncRequestID;
-(void)setAsyncRequestID:(id)arg1;
-(UILabel *)countLabel;

@end

