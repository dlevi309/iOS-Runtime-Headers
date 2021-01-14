/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) SBSLockScreenContentAction * action; 
@property (nonatomic,retain) UIView * platterView; 
@property (nonatomic,retain) UIViewController*<CSAdjunctItemHosting> contentHost; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)platterView;
-(void)setPlatterView:(UIView *)arg1 ;
-(id)init;
-(SBSLockScreenContentAction *)action;
-(void)addAction:(id)arg1 ;
-(BOOL)isValid;
-(void)removeAction:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setContentHost:(UIViewController*<CSAdjunctItemHosting>)arg1 ;
-(UIViewController*<CSAdjunctItemHosting>)contentHost;
-(void)conformsToCSAdjunctListItemProviding;
@end

