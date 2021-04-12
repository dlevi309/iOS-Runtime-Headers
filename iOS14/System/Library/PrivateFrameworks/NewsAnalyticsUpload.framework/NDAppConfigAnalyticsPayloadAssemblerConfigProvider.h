/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/

#import <libobjc.A.dylib/NDAnalyticsPayloadAssemblerConfigProvider.h>

@protocol FCNewsAppConfigurationManager;
@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider> {

	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,retain) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
-(id)init;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(void)fetchConfigWithCompletion:(/*^block*/id)arg1 ;
@end

