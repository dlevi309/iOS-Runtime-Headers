/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXCMMActionPerformerDelegate;
@class NSMutableDictionary;

@interface PXCMMActionManager : NSObject {

	id<PXCMMActionPerformerDelegate> _performerDelegate;
	NSMutableDictionary* _performerClassByType;

}

@property (nonatomic,readonly) NSMutableDictionary * performerClassByType;                           //@synthesize performerClassByType=_performerClassByType - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMActionPerformerDelegate> performerDelegate;              //@synthesize performerDelegate=_performerDelegate - In the implementation block
-(id)publishActionPerformer;
-(id)messageComposeActionPerformer;
-(id)photosPickerActionPerformer;
-(id)sendBackActionPerformer;
-(id)init;
-(Class)actionPerformerClassForActionType:(id)arg1 ;
-(NSMutableDictionary *)performerClassByType;
-(id<PXCMMActionPerformerDelegate>)performerDelegate;
-(void)setPerformerDelegate:(id<PXCMMActionPerformerDelegate>)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 ;
@end

