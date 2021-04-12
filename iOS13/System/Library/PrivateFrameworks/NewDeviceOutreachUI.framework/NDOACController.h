/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/


@class PSListController, NDOSpecifierDataSource, NSArray;

@interface NDOACController : NSObject {

	PSListController* _parentViewController;
	NDOSpecifierDataSource* _ndoSpecifierDataSource;

}

@property (nonatomic,retain) NDOSpecifierDataSource * ndoSpecifierDataSource;              //@synthesize ndoSpecifierDataSource=_ndoSpecifierDataSource - In the implementation block
@property (readonly) NSArray * specifiers; 
@property (retain) PSListController * parentViewController;                                //@synthesize parentViewController=_parentViewController - In the implementation block
+(id)sharedController;
-(id)init;
-(PSListController *)parentViewController;
-(void)setParentViewController:(PSListController *)arg1 ;
-(NSArray *)specifiers;
-(void)updateSpecifiersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNdoSpecifierDataSource:(NDOSpecifierDataSource *)arg1 ;
-(NDOSpecifierDataSource *)ndoSpecifierDataSource;
@end

