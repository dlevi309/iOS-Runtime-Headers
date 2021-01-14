/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSArray;

@interface PUWarningHelper : NSObject {

	NSArray* __assets;

}

@property (setter=_setAssets:,nonatomic,retain) NSArray * _assets;              //@synthesize _assets=__assets - In the implementation block
+(void)getRemovalWarningMessage:(id*)arg1 buttonTitle:(id*)arg2 cancelTitle:(id*)arg3 forAssets:(id)arg4 inCollection:(id)arg5 ;
+(void)getCombinedRemovalDeletionWarningMessage:(id*)arg1 removeButtonTitle:(id*)arg2 deleteButtonTitle:(id*)arg3 cancelTitle:(id*)arg4 forAssets:(id)arg5 inCollection:(id)arg6 ;
+(id)_suffix:(id)arg1 ;
-(void)_setAssets:(id)arg1 ;
-(NSArray *)_assets;
@end

