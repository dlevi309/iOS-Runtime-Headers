/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKSession <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (assign,nonatomic,__weak) id<PKSessionDelegate> delegate; 
@required
-(id<PKSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)state;
-(void)endSession;

@end

