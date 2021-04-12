/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setup;
-(DCDocumentCameraViewServiceSessionRequest *)sessionRequest;
-(int)viewServicePid;
-(id)initWithSessionRequest:(id)arg1 ;
-(ICDocCamImageCache *)docCamImageCache;
@end

