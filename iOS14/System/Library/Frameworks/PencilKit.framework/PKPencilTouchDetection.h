/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKPencilTouchDetectionDelegate;
@interface PKPencilTouchDetection : NSObject {

	id<PKPencilTouchDetectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPencilTouchDetectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PKPencilTouchDetectionDelegate>)delegate;
-(void)setDelegate:(id<PKPencilTouchDetectionDelegate>)arg1 ;
-(void)dealloc;
-(void)pencilType:(long long)arg1 hasRecentlyBeenUsedWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)didUpdateWithUserInfo:(id)arg1 ;
@end

