/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MCSignInPageAuthenticationCell *)cell;
-(void)setInlineSignInViewController:(AKInlineSignInViewController *)arg1 ;
-(void)setCell:(MCSignInPageAuthenticationCell *)arg1 ;
-(id)titleForHeader;
-(double)heightForHeader;
-(unsigned long long)numberOfRows;
-(AKInlineSignInViewController *)inlineSignInViewController;
-(id)cellForRowAtIndex:(unsigned long long)arg1 ;
-(void)registerCellClassWithTableView:(id)arg1 ;
-(double)heightForRowAtIndex:(unsigned long long)arg1 ;
-(void)setAuthSectionHeight:(double)arg1 ;
-(double)authSectionHeight;
@end

