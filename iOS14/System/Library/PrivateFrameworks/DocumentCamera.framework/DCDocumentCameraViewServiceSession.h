/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DCDocumentCameraViewServiceSessionRequest, ICDocCamImageCache;

@interface DCDocumentCameraViewServiceSession : NSObject <NSSecureCoding> {

	int _viewServicePid;
	DCDocumentCameraViewServiceSessionRequest* _sessionRequest;
	ICDocCamImageCache* _docCamImageCache;

}

@property (nonatomic,readonly) DCDocumentCameraViewServiceSessionRequest * sessionRequest;              //@synthesize sessionRequest=_sessionRequest - In the implementation block
@property (nonatomic,readonly) int viewServicePid;                                                      //@synthesize viewServicePid=_viewServicePid - In the implementation block
@property (nonatomic,readonly) ICDocCamImageCache * docCamImageCache;                                   //@synthesize docCamImageCache=_docCamImageCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setup;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DCDocumentCameraViewServiceSessionRequest *)sessionRequest;
-(int)viewServicePid;
-(id)initWithSessionRequest:(id)arg1 ;
-(ICDocCamImageCache *)docCamImageCache;
@end

