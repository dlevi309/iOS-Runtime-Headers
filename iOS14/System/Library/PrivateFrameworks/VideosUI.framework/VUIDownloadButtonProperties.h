/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)downloadState;
-(void)setImage:(UIImage *)arg1 ;
-(double)progress;
-(BOOL)hasTitle;
-(void)setIndeterminate:(BOOL)arg1 ;
-(BOOL)hasImage;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setHasTitle:(BOOL)arg1 ;
-(void)setDownloadState:(unsigned long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setHasImage:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)title;
-(BOOL)hasBorder;
-(void)setHasBorder:(BOOL)arg1 ;
-(BOOL)isInderminate;
@end

