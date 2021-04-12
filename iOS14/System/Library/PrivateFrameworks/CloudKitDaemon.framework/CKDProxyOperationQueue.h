/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

@interface CKDProxyOperationQueue : NSOperationQueue {

	CKDClientProxy* _proxy;

}

@property (assign,nonatomic,__weak) CKDClientProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(id)initWithProxy:(id)arg1 ;
-(CKDClientProxy *)proxy;
-(void)addOperation:(id)arg1 ;
@end

