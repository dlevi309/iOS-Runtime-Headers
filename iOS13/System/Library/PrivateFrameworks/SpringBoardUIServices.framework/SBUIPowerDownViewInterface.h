/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/


@protocol SBUIPowerDownViewInterface <NSObject>
@property (assign,nonatomic,__weak) id<SBUIPowerDownViewDelegate> delegate; 
@required
-(id<SBUIPowerDownViewDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;

@end

