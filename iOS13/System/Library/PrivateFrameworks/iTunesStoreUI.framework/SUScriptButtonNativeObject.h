/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)subtitle;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)setSubtitle:(NSString *)arg1 ;
-(int)buttonType;
-(BOOL)isBackButton;
-(NSString *)styleString;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
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

