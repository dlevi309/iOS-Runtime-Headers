/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class SBFolder, NSString;

@interface SBIconPreviousLocationInfo : NSObject {

	SBFolder* _folder;
	NSString* _folderName;

}

@property (assign,nonatomic,__weak) SBFolder * folder;              //@synthesize folder=_folder - In the implementation block
@property (nonatomic,copy) NSString * folderName;                   //@synthesize folderName=_folderName - In the implementation block
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(NSString *)folderName;
-(void)setFolderName:(NSString *)arg1 ;
@end

