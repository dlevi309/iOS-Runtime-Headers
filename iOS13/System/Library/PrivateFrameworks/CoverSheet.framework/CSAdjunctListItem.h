/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/CSAdjunctListItemProviding.h>

@protocol CSAdjunctItemHosting;
@class NSString, SBSLockScreenContentAction, UIView, NSMutableSet, UIViewController;

@interface CSAdjunctListItem : NSObject <CSAdjunctListItemProviding> {

	NSMutableSet* _actions;
	UIView* platterView;
	UIViewController*<CSAdjunctItemHosting> contentHost;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBSLockScreenContentAction * action; 
@property (nonatomic,retain) UIView * platterView; 
@property (nonatomic,retain) UIViewController*<CSAdjunctItemHosting> contentHost; 
-(id)init;
-(BOOL)isValid;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(SBSLockScreenContentAction *)action;
-(void)addAction:(id)arg1 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(UIView *)platterView;
-(void)removeAction:(id)arg1 ;
-(void)setContentHost:(UIViewController*<CSAdjunctItemHosting>)arg1 ;
-(UIViewController*<CSAdjunctItemHosting>)contentHost;
@end

