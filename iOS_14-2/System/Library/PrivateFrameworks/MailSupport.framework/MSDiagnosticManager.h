/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class AWDServerConnection, NSString;

@interface MSDiagnosticManager : NSObject <EFLoggable> {

	AWDServerConnection* _awdServerConnection;

}

@property (nonatomic,readonly) AWDServerConnection * awdServerConnection;              //@synthesize awdServerConnection=_awdServerConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)init;
-(AWDServerConnection *)awdServerConnection;
-(void)submitComposeAttachmentReport:(id)arg1 ;
-(BOOL)submitWithIdentifier:(unsigned)arg1 metricGenerator:(/*^block*/id)arg2 ;
-(void)submitSearchSessionWithSearchEngagement:(id)arg1 numberOfMessagesLeftToIndex:(unsigned long long)arg2 percentOfMessagesIndexed:(unsigned long long)arg3 emailProvider:(int)arg4 ;
-(void)submitMessageLoadingReport:(id)arg1 ;
-(void)submitFetchMetricsReport:(id)arg1 ;
@end

