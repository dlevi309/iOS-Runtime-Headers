/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPConnectionsLocationSourceDelegate;
@interface PPConnectionsSource : NSObject {

	id<PPConnectionsLocationSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PPConnectionsLocationSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
+(id)identifier;
-(id<PPConnectionsLocationSourceDelegate>)delegate;
-(void)setDelegate:(id<PPConnectionsLocationSourceDelegate>)arg1 ;
@end

