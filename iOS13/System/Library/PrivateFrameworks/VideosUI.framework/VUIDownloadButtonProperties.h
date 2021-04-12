/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class UIImage, NSString;

@interface VUIDownloadButtonProperties : NSObject {

	BOOL _hasBorder;
	BOOL _enabled;
	BOOL _hasImage;
	BOOL _hasTitle;
	BOOL _indeterminate;
	UIImage* _image;
	NSString* _title;
	double _progress;
	unsigned long long _downloadState;

}

@property (assign,nonatomic) BOOL hasBorder;                                       //@synthesize hasBorder=_hasBorder - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasImage;                                        //@synthesize hasImage=_hasImage - In the implementation block
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL hasTitle;                                        //@synthesize hasTitle=_hasTitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (assign,getter=isInderminate,nonatomic) BOOL indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
@property (assign,nonatomic) double progress;                                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long downloadState;                     //@synthesize downloadState=_downloadState - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(double)progress;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIndeterminate:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setHasTitle:(BOOL)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(void)setHasImage:(BOOL)arg1 ;
-(unsigned long long)downloadState;
-(void)setDownloadState:(unsigned long long)arg1 ;
-(BOOL)hasBorder;
-(void)setHasBorder:(BOOL)arg1 ;
-(BOOL)isInderminate;
@end

