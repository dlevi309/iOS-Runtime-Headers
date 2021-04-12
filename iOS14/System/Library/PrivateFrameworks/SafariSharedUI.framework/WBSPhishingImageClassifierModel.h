/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSPhishingImageClassifierModelProtocol.h>

@protocol OS_dispatch_queue;
@class VNCoreMLModel, NSURL, NSObject;

@interface WBSPhishingImageClassifierModel : NSObject <WBSPhishingImageClassifierModelProtocol> {

	VNCoreMLModel* _model;
	NSURL* _url;
	CGSize _imageInputSize;
	unsigned long long _cropAndScaleOption;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)configureSnapshotConfiguration:(id)arg1 cropAndScaleOption:(unsigned long long)arg2 webViewBounds:(CGRect)arg3 modelInputSize:(CGSize)arg4 ;
-(id)initWithURL:(id)arg1 cropAndScaleOption:(unsigned long long)arg2 imageInputSize:(CGSize)arg3 error:(id*)arg4 ;
-(void)configureSnapshotConfiguration:(id)arg1 webViewBounds:(CGRect)arg2 ;
-(BOOL)classifyImage:(id)arg1 enumerationBlock:(/*^block*/id)arg2 error:(out id*)arg3 ;
-(void)_loadModelIfNecessary;
-(id)_createClassifierRequest;
-(id)_createClassifierRequestHandlerWithImage:(id)arg1 ;
@end

