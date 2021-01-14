/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTEnvironmentUIKitStoreDelegate.h>

@interface MTConvenienceEnvironmentDelegate : MTEnvironmentUIKitStoreDelegate {

	/*^block*/id __pageURLBlock;
	/*^block*/id __resourceRevNumBlock;
	/*^block*/id __hostAppBlock;

}

@property (nonatomic,copy) id _pageURLBlock;                     //@synthesize _pageURLBlock=__pageURLBlock - In the implementation block
@property (nonatomic,copy) id _resourceRevNumBlock;              //@synthesize _resourceRevNumBlock=__resourceRevNumBlock - In the implementation block
@property (nonatomic,copy) id _hostAppBlock;                     //@synthesize _hostAppBlock=__hostAppBlock - In the implementation block
-(id)init;
-(id)pageUrl;
-(id)hostApp;
-(id)resourceRevNum;
-(id)initWithPageURLBlock:(/*^block*/id)arg1 resourceRevNumBlock:(/*^block*/id)arg2 hostAppBlock:(/*^block*/id)arg3 ;
-(id)_hostAppBlock;
-(id)_pageURLBlock;
-(id)_resourceRevNumBlock;
-(void)set_pageURLBlock:(id)arg1 ;
-(void)set_resourceRevNumBlock:(id)arg1 ;
-(void)set_hostAppBlock:(id)arg1 ;
@end

