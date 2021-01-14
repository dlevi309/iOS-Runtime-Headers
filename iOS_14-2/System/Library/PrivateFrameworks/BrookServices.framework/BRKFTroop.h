/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
*/


@protocol BRKFTroopDelegate;
@interface BRKFTroop : NSObject {

	id<BRKFTroopDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BRKFTroopDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isEnabled;
-(id<BRKFTroopDelegate>)delegate;
-(void)setDelegate:(id<BRKFTroopDelegate>)arg1 ;
-(void)startListeningForDemoReset;
-(void)stopListeningForDemoReset;
@end

