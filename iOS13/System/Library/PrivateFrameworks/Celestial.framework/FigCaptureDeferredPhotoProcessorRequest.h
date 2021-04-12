/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FigCaptureDeferredPhotoProcessorRequest *)parent;
-(NSString *)captureRequestIdentifier;
-(NSString *)photoIdentifier;
-(id)initWithApplicationID:(id)arg1 captureRequstIdentifier:(id)arg2 photoIdentifier:(id)arg3 message:(id)arg4 parent:(id)arg5 ;
-(NSString *)applicationID;
@end

