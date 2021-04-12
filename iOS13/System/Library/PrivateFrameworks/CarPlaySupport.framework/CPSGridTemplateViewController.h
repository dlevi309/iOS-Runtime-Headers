/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setControl:(id)arg1 enabled:(BOOL)arg2 ;
-(NSArray *)gridButtons;
-(void)didSelectButton:(id)arg1 ;
-(void)_viewDidLoad;
-(id)initWithGridTemplate:(id)arg1 interfaceDelegate:(id)arg2 ;
-(CPGridTemplate *)gridTemplate;
-(void)setGridButtons:(NSArray *)arg1 ;
-(id)_buttonForIdentifier:(id)arg1 ;
@end

