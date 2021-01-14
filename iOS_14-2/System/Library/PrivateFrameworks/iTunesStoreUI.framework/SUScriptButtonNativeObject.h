/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptNativeObject.h>

@class NSString, UIImage;

@interface SUScriptButtonNativeObject : SUScriptNativeObject {

	BOOL _loading;
	NSString* _subtitle;
	NSString* _styleString;
	NSString* _systemItemString;

}

@property (getter=isShowingConfirmation,nonatomic,readonly) BOOL showingConfirmation; 
@property (nonatomic,readonly) int buttonType; 
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                        //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,readonly) NSString * systemItemString;                                        //@synthesize systemItemString=_systemItemString - In the implementation block
@property (assign,nonatomic) long long tag; 
@property (nonatomic,retain) NSString * title; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) UIEdgeInsets imageInsets; 
@property (getter=isBackButton,nonatomic,readonly) BOOL backButton; 
@property (nonatomic,readonly) NSString * styleString; 
+(id)objectWithDefaultButtonForScriptButton:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isLoading;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)subtitle;
-(UIEdgeInsets)imageInsets;
-(NSString *)styleString;
-(BOOL)isBackButton;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(int)buttonType;
-(void)dealloc;
-(BOOL)isShowingConfirmation;
-(void)buttonAction:(id)arg1 ;
-(id)initWithSystemItemString:(id)arg1 ;
-(void)configureFromScriptButtonNativeObject:(id)arg1 ;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)disconnectButtonAction;
-(void)connectButtonAction;
-(void)setStyleFromString:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)systemItemString;
@end

