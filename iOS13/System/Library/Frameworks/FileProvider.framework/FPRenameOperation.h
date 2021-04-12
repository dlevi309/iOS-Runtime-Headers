/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSString;

@interface FPRenameOperation : FPActionOperation {

	FPItem* _item;
	NSString* _newName;

}
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)fp_prettyDescription;
-(void)actionMain;
-(void)presendNotifications;
-(id)initWithItem:(id)arg1 newDisplayName:(id)arg2 ;
-(id)initWithItem:(id)arg1 newName:(id)arg2 ;
-(id)initWithItem:(id)arg1 newFileName:(id)arg2 ;
@end

