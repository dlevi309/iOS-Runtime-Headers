/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UICollectionView.h>

@class AMSUICommonCollectionViewHandler;

@interface AMSUICommonCollectionView : UICollectionView {

	AMSUICommonCollectionViewHandler* _handler;

}

@property (nonatomic,readonly) AMSUICommonCollectionViewHandler * handler;                             //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUICommonCollectionViewDelegate> commonDelegate; 
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> delegate; 
-(id)init;
-(AMSUICommonCollectionViewHandler *)handler;
-(id<AMSUICommonCollectionViewDelegate>)commonDelegate;
-(void)setCommonDelegate:(id<AMSUICommonCollectionViewDelegate>)arg1 ;
@end

