/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdManagerConfigurationProvider.h>

@protocol NUAdManagerConfiguration;
@class NSObject, NSString;

@interface NUFetchedAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider> {

	NSObject*<NUAdManagerConfiguration> _configuration;

}

@property (nonatomic,copy,readonly) NSObject*<NUAdManagerConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(NSObject*<NUAdManagerConfiguration>)configuration;
-(void)fetchConfigurationWithCompletion:(/*^block*/id)arg1 ;
@end

