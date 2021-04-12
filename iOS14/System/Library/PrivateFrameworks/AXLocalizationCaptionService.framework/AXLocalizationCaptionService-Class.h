/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXLocalizationCaptionService.framework/AXLocalizationCaptionService
*/

#import <AXLocalizationCaptionService/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface AXLocalizationCaptionService : NSObject <AXUIClientDelegate> {

	AXUIClient* _client;

}

@property (nonatomic,retain) AXUIClient * client;                   //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startService;
+(void)stopService;
+(void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
+(id)service;
-(AXUIClient *)client;
-(void)setClient:(AXUIClient *)arg1 ;
-(id)_clientIdentifier;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
@end

