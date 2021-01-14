/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSString, FPItemID;

@interface FPCreateFolderOperation : FPActionOperation {

	FPItem* _parentItem;
	NSString* _folderFilename;
	FPItemID* _placeholderID;
	BOOL _shouldBounceOnCollision;
	/*^block*/id _createFolderCompletionBlock;

}

@property (assign,nonatomic) BOOL shouldBounceOnCollision;              //@synthesize shouldBounceOnCollision=_shouldBounceOnCollision - In the implementation block
@property (nonatomic,copy) id createFolderCompletionBlock;              //@synthesize createFolderCompletionBlock=_createFolderCompletionBlock - In the implementation block
-(void)setShouldBounceOnCollision:(BOOL)arg1 ;
-(void)actionMain;
-(void)presendNotifications;
-(BOOL)shouldBounceOnCollision;
-(id)createFolderCompletionBlock;
-(void)setCreateFolderCompletionBlock:(id)arg1 ;
-(id)initWithParentItem:(id)arg1 folderName:(id)arg2 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

