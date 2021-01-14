/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue;

@interface _TtC3ECSP33_83682B33CF2DD64B57A89285DAFFAE8A13SourceWatcher : NSObject <NSFilePresenter> {

	 handler;
	 path;
	 presentedItemOperationQueue;

}

@property (copy,nonatomic) NSURL * presentedItemURL; 
@property (readonly,nonatomic) NSOperationQueue * presentedItemOperationQueue; 
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)init;
-(void)presentedSubitemDidAppearAtURL:(id)arg1 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(void)setPresentedItemURL:(NSURL *)arg1 ;
@end

