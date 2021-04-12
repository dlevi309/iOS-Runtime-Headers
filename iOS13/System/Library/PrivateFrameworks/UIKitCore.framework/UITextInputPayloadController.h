/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<UITextInputPayloadDelegate>)payloadDelegate;
-(NSArray *)supportedPayloadIds;
-(void)setSupportedPayloadIds:(NSArray *)arg1 ;
-(void)setPayloadDelegate:(id<UITextInputPayloadDelegate>)arg1 ;
@end

