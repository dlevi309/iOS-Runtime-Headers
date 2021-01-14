/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface FigCaptureDeferredPhotoProcessorRequest : NSObject {

	NSString* _applicationID;
	NSString* _captureRequestIdentifier;
	NSString* _photoIdentifier;
	FigCaptureDeferredPhotoProcessorRequest* _parent;
	NSObject*<OS_xpc_object> _message;

}

@property (nonatomic,readonly) NSString * applicationID;                                      //@synthesize applicationID=_applicationID - In the implementation block
@property (nonatomic,readonly) NSString * captureRequestIdentifier;                           //@synthesize captureRequestIdentifier=_captureRequestIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * photoIdentifier;                                    //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (nonatomic,readonly) FigCaptureDeferredPhotoProcessorRequest * parent;              //@synthesize parent=_parent - In the implementation block
-(NSString *)applicationID;
-(FigCaptureDeferredPhotoProcessorRequest *)parent;
-(id)initWithApplicationID:(id)arg1 captureRequstIdentifier:(id)arg2 photoIdentifier:(id)arg3 message:(id)arg4 parent:(id)arg5 ;
-(NSString *)captureRequestIdentifier;
-(NSString *)photoIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

