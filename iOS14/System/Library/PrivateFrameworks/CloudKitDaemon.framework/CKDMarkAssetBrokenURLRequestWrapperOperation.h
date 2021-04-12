/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation {

	CKDMarkAssetBrokenURLRequest* _urlRequest;

}

@property (nonatomic,retain) CKDMarkAssetBrokenURLRequest * urlRequest;              //@synthesize urlRequest=_urlRequest - In the implementation block
-(int)operationType;
-(id)activityCreate;
-(CKDMarkAssetBrokenURLRequest *)urlRequest;
-(void)main;
-(void)setUrlRequest:(CKDMarkAssetBrokenURLRequest *)arg1 ;
-(BOOL)shouldCheckAppVersion;
@end

