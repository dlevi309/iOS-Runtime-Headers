/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet;

@interface Coherence.CRFileSyncPresenter : NSObject <NSFilePresenter> {

	 queue;
	 manager;

}

@property (readonly,nonatomic) NSURL * presentedItemURL; 
@property (readonly,nonatomic) NSOperationQueue * presentedItemOperationQueue; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)init;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidChange;
@end

