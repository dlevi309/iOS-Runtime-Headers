/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)prepareForReuse;
-(IMBalloonPluginDataSource *)dataSource;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setBalloonBundleID:(NSString *)arg1 ;
-(NSString *)balloonBundleID;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)setPreviousPluginSnapshot:(UIView *)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)_updateBalloonPluginIconImage;
-(UIView *)previousPluginSnapshot;
@end

