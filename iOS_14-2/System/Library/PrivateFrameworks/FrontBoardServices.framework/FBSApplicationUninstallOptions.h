/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@interface FBSApplicationUninstallOptions : NSObject {

	BOOL _userInitiated;
	BOOL _showsArchiveOption;

}

@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic) BOOL showsArchiveOption;                                //@synthesize showsArchiveOption=_showsArchiveOption - In the implementation block
+(id)userInitiated;
-(BOOL)showsArchiveOption;
-(void)setShowsArchiveOption:(BOOL)arg1 ;
-(BOOL)isUserInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
@end

