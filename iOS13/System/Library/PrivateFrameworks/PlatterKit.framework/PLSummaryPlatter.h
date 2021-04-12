/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

@class NSString, UIImage, UIView;


@protocol PLSummaryPlatter <PLPlatter>
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,retain) NSString * primarySubtitleText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (nonatomic,retain) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long messageNumberOfLines; 
@required
-(void)setAccessoryView:(id)arg1;
-(UIView *)accessoryView;
-(UIImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(NSString *)primaryText;
-(void)setPrimaryText:(id)arg1;
-(NSString *)secondaryText;
-(void)setSecondaryText:(id)arg1;
-(void)setSummaryText:(id)arg1;
-(NSString *)summaryText;
-(void)setMessageNumberOfLines:(unsigned long long)arg1;
-(unsigned long long)messageNumberOfLines;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(id)arg1;

@end

