/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPGridTemplateProviding.h>

@class NSArray, CPGridTemplate, NSString;

@interface CPSGridTemplateViewController : CPSBaseTemplateViewController <CPSButtonDelegate, CPGridTemplateProviding> {

	NSArray* _gridButtons;

}

@property (nonatomic,retain) NSArray * gridButtons;                        //@synthesize gridButtons=_gridButtons - In the implementation block
@property (nonatomic,readonly) CPGridTemplate * gridTemplate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectButton:(id)arg1 ;
-(void)setControl:(id)arg1 enabled:(BOOL)arg2 ;
-(NSArray *)gridButtons;
-(void)_viewDidLoad;
-(id)initWithGridTemplate:(id)arg1 interfaceDelegate:(id)arg2 templateEnvironment:(id)arg3 ;
-(BOOL)_wantsNowPlayingButton;
-(CPGridTemplate *)gridTemplate;
-(void)setGridButtons:(NSArray *)arg1 ;
-(id)_buttonForIdentifier:(id)arg1 ;
@end

