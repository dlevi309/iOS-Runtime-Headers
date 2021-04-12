/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString, UIView;

@interface VUIActionShareSheet : VUIAction {

	NSString* _urlString;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageURLStr;
	UIView* _sourceView;

}

@property (nonatomic,retain) NSString * urlString;                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * imageURLStr;              //@synthesize imageURLStr=_imageURLStr - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                 //@synthesize sourceView=_sourceView - In the implementation block
-(NSString *)urlString;
-(void)setSourceView:(UIView *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)sourceView;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setUrlString:(NSString *)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContextData:(id)arg1 viewElement:(id)arg2 sourceView:(id)arg3 ;
-(NSString *)imageURLStr;
-(void)setImageURLStr:(NSString *)arg1 ;
@end

