/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation {

	CKDMarkAssetBrokenURLRequest* _urlRequest;

}

@property (nonatomic,retain) CKDMarkAssetBrokenURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
-(void)main;
-(id)activityCreate;
-(CKDMarkAssetBrokenURLRequest *)urlRequest;
-(void)setUrlRequest:(CKDMarkAssetBrokenURLRequest *)arg1 ;
-(BOOL)shouldCheckAppVersion;
@end

