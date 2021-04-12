/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol CXNetworkExtensionMessageControllerDataSource;
@interface CXNetworkExtensionMessageController : NSObject {

	id<CXNetworkExtensionMessageControllerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<CXNetworkExtensionMessageControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(id<CXNetworkExtensionMessageControllerDataSource>)dataSource;
-(void)sendNetworkExtensionMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

