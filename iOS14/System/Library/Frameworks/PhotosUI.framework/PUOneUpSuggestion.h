/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSString, UIImage, AVAsset, AVVideoComposition;

@interface PUOneUpSuggestion : NSObject {

	long long _preferredPresentationStyle;
	NSString* _localizedTitle;
	UIImage* _titleIcon;
	NSString* _localizedMessage;
	NSString* _localizedDismissButtonTitle;
	UIImage* _image;
	AVAsset* _loopingVideoAsset;
	AVVideoComposition* _loopingVideoComposition;
	/*^block*/id _markAsSeenHandler;
	/*^block*/id _dismissHandler;

}

@property (assign,nonatomic) long long preferredPresentationStyle;                      //@synthesize preferredPresentationStyle=_preferredPresentationStyle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * localizedTitle;                                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) UIImage * titleIcon;                                       //@synthesize titleIcon=_titleIcon - In the implementation block
@property (nonatomic,retain) NSString * localizedMessage;                               //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,retain) NSString * localizedDismissButtonTitle;                    //@synthesize localizedDismissButtonTitle=_localizedDismissButtonTitle - In the implementation block
@property (nonatomic,retain) AVAsset * loopingVideoAsset;                               //@synthesize loopingVideoAsset=_loopingVideoAsset - In the implementation block
@property (nonatomic,retain) AVVideoComposition * loopingVideoComposition;              //@synthesize loopingVideoComposition=_loopingVideoComposition - In the implementation block
@property (nonatomic,copy) id markAsSeenHandler;                                        //@synthesize markAsSeenHandler=_markAsSeenHandler - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                           //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(long long)preferredPresentationStyle;
-(void)setPreferredPresentationStyle:(long long)arg1 ;
-(UIImage *)titleIcon;
-(UIImage *)image;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(id)dismissHandler;
-(id)description;
-(AVAsset *)loopingVideoAsset;
-(NSString *)localizedMessage;
-(void)setTitleIcon:(UIImage *)arg1 ;
-(void)setMarkAsSeenHandler:(id)arg1 ;
-(void)setLoopingVideoComposition:(AVVideoComposition *)arg1 ;
-(AVVideoComposition *)loopingVideoComposition;
-(NSString *)localizedDismissButtonTitle;
-(id)markAsSeenHandler;
-(void)setLocalizedDismissButtonTitle:(NSString *)arg1 ;
-(void)setLoopingVideoAsset:(AVAsset *)arg1 ;
@end

