/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

