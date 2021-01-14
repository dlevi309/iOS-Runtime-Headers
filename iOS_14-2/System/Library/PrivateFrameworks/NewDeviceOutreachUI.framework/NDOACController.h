/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/


@class PSListController, NDOSpecifierDataSource, NSArray;

@interface NDOACController : NSObject {

	PSListController* _parentViewController;
	NDOSpecifierDataSource* _ndoSpecifierDataSource;

}

@property (nonatomic,retain) NDOSpecifierDataSource * ndoSpecifierDataSource;              //@synthesize ndoSpecifierDataSource=_ndoSpecifierDataSource - In the implementation block
@property (readonly) NSArray * specifiers; 
@property (__weak) PSListController * parentViewController;                                //@synthesize parentViewController=_parentViewController - In the implementation block
+(id)sharedController;
-(NSArray *)specifiers;
-(id)init;
-(PSListController *)parentViewController;
-(void)setParentViewController:(PSListController *)arg1 ;
-(void)setNdoSpecifierDataSource:(NDOSpecifierDataSource *)arg1 ;
-(NDOSpecifierDataSource *)ndoSpecifierDataSource;
-(void)updateSpecifiersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)forceUpdateSpecifiersWithCompletionHandler:(/*^block*/id)arg1 ;
@end

