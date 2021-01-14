/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

