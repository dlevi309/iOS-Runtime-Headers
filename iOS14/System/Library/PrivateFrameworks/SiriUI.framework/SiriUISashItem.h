/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@class NSString, UIImage, UIColor, NSArray;

@interface SiriUISashItem : NSObject {

	BOOL _canPunchout;
	BOOL _hidden;
	BOOL _isDefault;
	BOOL _requestsExtraPadding;
	NSString* _title;
	UIImage* _image;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	NSString* _applicationBundleIdentifier;
	NSArray* _commands;

}

@property (assign,setter=_setDefault:,nonatomic) BOOL isDefault;                         //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                        //@synthesize textColor=_textColor - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL canPunchout;                                         //@synthesize canPunchout=_canPunchout - In the implementation block
@property (nonatomic,copy) NSArray * commands;                                           //@synthesize commands=_commands - In the implementation block
@property (assign,nonatomic) BOOL requestsExtraPadding;                                  //@synthesize requestsExtraPadding=_requestsExtraPadding - In the implementation block
+(id)_languageCode;
+(id)defaultSashItem;
+(void)_setLanguageCode:(id)arg1 ;
-(UIColor *)textColor;
-(BOOL)isHidden;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithApplicationBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(UIImage *)image;
-(UIColor *)backgroundColor;
-(NSArray *)commands;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(BOOL)isDefault;
-(id)initWithTitle:(id)arg1 image:(id)arg2 ;
-(NSString *)applicationBundleIdentifier;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)canPunchout;
-(void)_setDefault:(BOOL)arg1 ;
-(BOOL)requestsExtraPadding;
-(void)setRequestsExtraPadding:(BOOL)arg1 ;
@end

