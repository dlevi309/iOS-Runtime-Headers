/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextInputPayloadDelegate;
@class NSArray;

@interface UITextInputPayloadController : NSObject {

	NSArray* _supportedPayloadIds;
	id<UITextInputPayloadDelegate> _payloadDelegate;

}

@property (nonatomic,copy) NSArray * supportedPayloadIds;                                 //@synthesize supportedPayloadIds=_supportedPayloadIds - In the implementation block
@property (assign,nonatomic) id<UITextInputPayloadDelegate> payloadDelegate;              //@synthesize payloadDelegate=_payloadDelegate - In the implementation block
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(id<UITextInputPayloadDelegate>)payloadDelegate;
-(NSArray *)supportedPayloadIds;
-(void)setSupportedPayloadIds:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setPayloadDelegate:(id<UITextInputPayloadDelegate>)arg1 ;
@end

