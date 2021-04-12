/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUErrorMessageFactory.h>

@protocol NUErrorMessageFactory <NSObject>
@required
-(id)errorMessageForArticleViewWithOfflineReason:(long long)arg1;
-(id)errorMessageForArticleView;

@end


@class FCNetworkReachability, NSString;

@interface NUErrorMessageFactory : NSObject <NUErrorMessageFactory> {

	FCNetworkReachability* _networkReachability;

}

@property (nonatomic,readonly) FCNetworkReachability * networkReachability;              //@synthesize networkReachability=_networkReachability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCNetworkReachability *)networkReachability;
-(id)initWithNetworkReachability:(id)arg1 ;
-(id)errorMessageForArticleViewWithOfflineReason:(long long)arg1 ;
-(id)errorMessageForTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)errorMessageForArticleView;
@end

