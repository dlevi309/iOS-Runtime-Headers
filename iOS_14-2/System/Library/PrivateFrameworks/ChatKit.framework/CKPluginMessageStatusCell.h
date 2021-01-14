/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMultilineLabelCell.h>

@class NSString, IMBalloonPluginDataSource, UIView, UIImageView;

@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell {

	NSString* _balloonBundleID;
	IMBalloonPluginDataSource* _dataSource;
	UIView* _previousPluginSnapshot;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * balloonBundleID;                            //@synthesize balloonBundleID=_balloonBundleID - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIView * previousPluginSnapshot;                     //@synthesize previousPluginSnapshot=_previousPluginSnapshot - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(NSString *)balloonBundleID;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(IMBalloonPluginDataSource *)dataSource;
-(void)prepareForReuse;
-(void)setBalloonBundleID:(NSString *)arg1 ;
-(void)_updateBalloonPluginIconImage;
-(UIView *)previousPluginSnapshot;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)setPreviousPluginSnapshot:(UIView *)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)dealloc;
@end

