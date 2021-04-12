/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/

#import <libobjc.A.dylib/NDAnalyticsPayloadAssemblerConfigProvider.h>

@protocol FCNewsAppConfigurationManager;
@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider> {

	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,retain) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
-(id)init;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(void)fetchConfigWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
@end

