/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSDeveloperSettings, VSOptional, VSDeveloperServiceConnection;

@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation {

	VSDeveloperSettings* _settings;
	VSOptional* _result;
	VSDeveloperServiceConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) VSDeveloperSettings * settings;                           //@synthesize settings=_settings - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setSettings:(VSDeveloperSettings *)arg1 ;
-(VSDeveloperServiceConnection *)connection;
-(VSDeveloperSettings *)settings;
-(VSOptional *)result;
-(void)setConnection:(VSDeveloperServiceConnection *)arg1 ;
@end

