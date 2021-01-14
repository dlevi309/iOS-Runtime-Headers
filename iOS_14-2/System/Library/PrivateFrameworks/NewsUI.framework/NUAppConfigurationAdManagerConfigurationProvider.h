/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdManagerConfigurationProvider.h>

@protocol FCNewsAppConfigurationManager;
@class NSString;

@interface NUAppConfigurationAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider> {

	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(void)fetchConfigurationWithCompletion:(/*^block*/id)arg1 ;
@end

