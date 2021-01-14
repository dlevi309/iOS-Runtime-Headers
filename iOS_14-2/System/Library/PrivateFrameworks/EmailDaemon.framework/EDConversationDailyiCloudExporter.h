/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDConversationDailyCloudExporterDelegate;
@class EDUbiquitousConversationManager, NSString;

@interface EDConversationDailyiCloudExporter : NSObject <EFLoggable> {

	id<EDConversationDailyCloudExporterDelegate> _delegate;
	EDUbiquitousConversationManager* _conversationManager;

}

@property (nonatomic,readonly) id<EDConversationDailyCloudExporterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) EDUbiquitousConversationManager * conversationManager;              //@synthesize conversationManager=_conversationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)run;
-(id<EDConversationDailyCloudExporterDelegate>)delegate;
-(EDUbiquitousConversationManager *)conversationManager;
-(id)initWithDelegate:(id)arg1 conversationManager:(id)arg2 ;
@end

