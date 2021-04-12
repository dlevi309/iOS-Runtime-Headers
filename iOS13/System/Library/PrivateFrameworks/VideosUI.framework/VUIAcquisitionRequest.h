/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIStoreAcquisitionProperties;

@interface VUIAcquisitionRequest : NSObject {

	BOOL _cancelled;
	VUIStoreAcquisitionProperties* _properties;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) VUIStoreAcquisitionProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                      //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)isCancelled;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(VUIStoreAcquisitionProperties *)properties;
-(void)setProperties:(VUIStoreAcquisitionProperties *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
@end

