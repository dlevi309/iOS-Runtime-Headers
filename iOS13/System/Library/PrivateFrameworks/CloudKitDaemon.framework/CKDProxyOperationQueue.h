/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

@interface CKDProxyOperationQueue : NSOperationQueue {

	CKDClientProxy* _proxy;

}

@property (assign,nonatomic,__weak) CKDClientProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(void)addOperation:(id)arg1 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(CKDClientProxy *)proxy;
-(id)initWithProxy:(id)arg1 ;
@end

