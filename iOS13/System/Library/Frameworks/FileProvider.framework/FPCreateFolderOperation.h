/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSString, FPItemID;

@interface FPCreateFolderOperation : FPActionOperation {

	FPItem* _parentItem;
	NSString* _folderFilename;
	FPItemID* _placeholderID;
	/*^block*/id _createFolderCompletionBlock;

}

@property (nonatomic,copy) id createFolderCompletionBlock;              //@synthesize createFolderCompletionBlock=_createFolderCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)actionMain;
-(void)presendNotifications;
-(id)createFolderCompletionBlock;
-(void)setCreateFolderCompletionBlock:(id)arg1 ;
-(id)initWithParentItem:(id)arg1 folderName:(id)arg2 ;
@end

