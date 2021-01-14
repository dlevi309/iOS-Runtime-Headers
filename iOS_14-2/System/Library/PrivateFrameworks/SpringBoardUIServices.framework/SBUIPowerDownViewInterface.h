/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

