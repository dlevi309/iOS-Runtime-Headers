/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface PKPaletteAttributeViewController : UIViewController {

	BOOL _didExperienceUserInteraction;
	BOOL _didSendDismissStatistics;
	NSString* _toolIdentifier;

}

@property (assign,nonatomic) BOOL didSendDismissStatistics;                  //@synthesize didSendDismissStatistics=_didSendDismissStatistics - In the implementation block
@property (assign,nonatomic) BOOL didExperienceUserInteraction;              //@synthesize didExperienceUserInteraction=_didExperienceUserInteraction - In the implementation block
@property (nonatomic,retain) NSString * toolIdentifier;                      //@synthesize toolIdentifier=_toolIdentifier - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setDidExperienceUserInteraction:(BOOL)arg1 ;
-(void)setDidSendDismissStatistics:(BOOL)arg1 ;
-(BOOL)didSendDismissStatistics;
-(NSString *)toolIdentifier;
-(BOOL)didExperienceUserInteraction;
-(void)setToolIdentifier:(NSString *)arg1 ;
@end

