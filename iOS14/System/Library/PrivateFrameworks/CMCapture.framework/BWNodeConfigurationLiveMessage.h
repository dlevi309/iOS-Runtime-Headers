/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWNodeMessage.h>

@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {

	long long _configurationID;
	BWFormat* _updatedFormat;

}

@property (readonly) long long configurationID; 
@property (readonly) BWFormat * updatedFormat; 
+(id)newMessageWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
+(id)newMessageWithConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(BWFormat *)updatedFormat;
-(id)_initWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
-(void)dealloc;
@end

