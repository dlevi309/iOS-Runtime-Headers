/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UINavigationController.h>

@interface PXFeedbackFileRadarViewController : UINavigationController {

	unsigned long long _collectionType;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(unsigned long long)collectionType;
-(id)initWithCollectionType:(unsigned long long)arg1 ;
-(void)_handleUserCancel:(id)arg1 ;
-(void)_handleUserConfirmation;
-(void)_handleRadarFiledWithError:(id)arg1 ;
-(void)_handleCompletion;
@end

