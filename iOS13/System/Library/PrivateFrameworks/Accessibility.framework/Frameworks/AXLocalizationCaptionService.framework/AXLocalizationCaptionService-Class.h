/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXLocalizationCaptionService.framework/AXLocalizationCaptionService
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
+(id)service;
+(void)startService;
+(void)stopService;
+(void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(AXUIClient *)client;
-(void)setClient:(AXUIClient *)arg1 ;
-(id)_clientIdentifier;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
@end

