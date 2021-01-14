/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet;

@interface VFXCore.MTLLibraryWatcher : NSObject <NSFilePresenter> {

	 watchingFolderQueue;
	 block;

}

@property (readonly,nonatomic) NSURL * presentedItemURL; 
@property (readonly,nonatomic) NSOperationQueue * presentedItemOperationQueue; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)init;
-(void)presentedItemDidChange;
@end

