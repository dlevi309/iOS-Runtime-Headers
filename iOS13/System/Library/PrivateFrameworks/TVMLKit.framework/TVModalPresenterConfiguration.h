/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString, UIView;

@interface TVModalPresenterConfiguration : NSObject {

	BOOL _allowsModalOverModal;
	BOOL _allowsMenuDismissal;
	BOOL _navigationBarHidden;
	NSString* _barButtonID;
	unsigned long long _configurationType;
	long long _presentationStyle;
	UIView* _sourceView;
	CGSize _formSheetSize;
	CGSize _popoverSize;
	CGRect _sourceRect;

}

@property (assign,nonatomic) BOOL allowsModalOverModal;                         //@synthesize allowsModalOverModal=_allowsModalOverModal - In the implementation block
@property (assign,nonatomic) BOOL allowsMenuDismissal;                          //@synthesize allowsMenuDismissal=_allowsMenuDismissal - In the implementation block
@property (nonatomic,copy) NSString * barButtonID;                              //@synthesize barButtonID=_barButtonID - In the implementation block
@property (assign,nonatomic) unsigned long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
@property (assign,nonatomic) CGSize formSheetSize;                              //@synthesize formSheetSize=_formSheetSize - In the implementation block
@property (assign,nonatomic) CGSize popoverSize;                                //@synthesize popoverSize=_popoverSize - In the implementation block
@property (assign,nonatomic) BOOL navigationBarHidden;                          //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,nonatomic) long long presentationStyle;                       //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                               //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                 //@synthesize sourceRect=_sourceRect - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)presentationStyle;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(CGSize)formSheetSize;
-(void)setFormSheetSize:(CGSize)arg1 ;
-(BOOL)navigationBarHidden;
-(unsigned long long)configurationType;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(BOOL)allowsModalOverModal;
-(NSString *)barButtonID;
-(CGSize)popoverSize;
-(void)_configureWithDictionary:(id)arg1 ;
-(void)setAllowsModalOverModal:(BOOL)arg1 ;
-(BOOL)allowsMenuDismissal;
-(void)setAllowsMenuDismissal:(BOOL)arg1 ;
-(void)setBarButtonID:(NSString *)arg1 ;
-(void)setPopoverSize:(CGSize)arg1 ;
@end

