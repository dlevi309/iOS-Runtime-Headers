/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUErrorMessageFactory.h>

@protocol NUErrorMessageFactory <NSObject>
@required
-(id)errorMessageForArticleView;
-(id)errorMessageForArticleViewWithOfflineReason:(long long)arg1;
-(id)errorMessageForArticleViewWithOfflineReason:(long long)arg1;

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
-(id)initWithNetworkReachability:(id)arg1 ;
-(FCNetworkReachability *)networkReachability;
-(id)errorMessageForArticleView;
-(id)errorMessageForArticleViewWithOfflineReason:(long long)arg1 ;
-(id)errorMessageForTitle:(id)arg1 subtitle:(id)arg2 ;
@end

