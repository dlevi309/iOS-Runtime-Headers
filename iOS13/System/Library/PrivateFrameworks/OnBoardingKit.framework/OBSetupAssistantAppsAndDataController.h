/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString;

@interface OBSetupAssistantAppsAndDataController : OBTableWelcomeController {

	NSString* _detailedLabelHeader;
	NSString* _detailedLabelBody;

}

@property (nonatomic,retain) NSString * detailedLabelHeader;              //@synthesize detailedLabelHeader=_detailedLabelHeader - In the implementation block
@property (nonatomic,retain) NSString * detailedLabelBody;                //@synthesize detailedLabelBody=_detailedLabelBody - In the implementation block
-(void)viewDidLoad;
-(void)setTableView:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(NSString *)detailedLabelHeader;
-(NSString *)detailedLabelBody;
-(void)setDetailedLabelHeader:(NSString *)arg1 ;
-(void)setDetailedLabelBody:(NSString *)arg1 ;
@end

