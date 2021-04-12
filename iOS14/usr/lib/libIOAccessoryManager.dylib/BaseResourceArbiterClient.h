/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

