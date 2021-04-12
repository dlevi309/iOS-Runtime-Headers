/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libIOAccessoryManager.dylib
*/


@protocol ResourceArbiterClientDelegate;
@interface BaseResourceArbiterClient : NSObject {

	id<ResourceArbiterClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ResourceArbiterClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ResourceArbiterClientDelegate>)delegate;
-(void)setDelegate:(id<ResourceArbiterClientDelegate>)arg1 ;
-(void)releaseResourceAccess;
-(BOOL)synchRequestResourceAccess;
-(BOOL)asynchRequestResourceAccess:(BOOL)arg1 ;
@end

