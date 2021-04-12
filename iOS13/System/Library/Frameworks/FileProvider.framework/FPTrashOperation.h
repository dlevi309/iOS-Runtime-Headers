/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPTransformOperation.h>

@interface FPTrashOperation : FPTransformOperation
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithItems:(id)arg1 ;
-(id)fp_prettyDescription;
-(void)presendNotifications;
-(void)subclassPreflightWithCompletion:(/*^block*/id)arg1 ;
-(id)replicateForItems:(id)arg1 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)finalItemsForStitcherForResult:(id)arg1 ;
@end

