/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <libobjc.A.dylib/MCProfileTitlePageSectionController.h>

@class MCSignInPageAuthenticationCell, AKInlineSignInViewController, NSString;

@interface MCSignInPageAuthenticationSectionController : NSObject <MCProfileTitlePageSectionController> {

	MCSignInPageAuthenticationCell* _cell;
	AKInlineSignInViewController* _inlineSignInViewController;
	double _authSectionHeight;

}

@property (nonatomic,retain) MCSignInPageAuthenticationCell * cell;                                  //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) AKInlineSignInViewController * inlineSignInViewController;              //@synthesize inlineSignInViewController=_inlineSignInViewController - In the implementation block
@property (assign,nonatomic) double authSectionHeight;                                               //@synthesize authSectionHeight=_authSectionHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfRows;
-(MCSignInPageAuthenticationCell *)cell;
-(void)setCell:(MCSignInPageAuthenticationCell *)arg1 ;
-(double)heightForHeader;
-(id)cellForRowAtIndex:(unsigned long long)arg1 ;
-(AKInlineSignInViewController *)inlineSignInViewController;
-(void)registerCellClassWithTableView:(id)arg1 ;
-(id)titleForHeader;
-(double)heightForRowAtIndex:(unsigned long long)arg1 ;
-(void)setAuthSectionHeight:(double)arg1 ;
-(double)authSectionHeight;
-(void)setInlineSignInViewController:(AKInlineSignInViewController *)arg1 ;
@end

