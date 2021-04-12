/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSString;

@interface FPRenameOperation : FPActionOperation {

	FPItem* _item;
	NSString* _newName;

}
-(void)actionMain;
-(void)presendNotifications;
-(id)fp_prettyDescription;
-(id)initWithItem:(id)arg1 newDisplayName:(id)arg2 ;
-(id)initWithItem:(id)arg1 newName:(id)arg2 ;
-(id)initWithItem:(id)arg1 newFileName:(id)arg2 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

