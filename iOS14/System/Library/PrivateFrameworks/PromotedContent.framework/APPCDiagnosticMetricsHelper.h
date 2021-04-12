/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <libobjc.A.dylib/APPCDiagnosticMetricsHelping.h>
#import <libobjc.A.dylib/APPCMetricRegister.h>

@interface APPCDiagnosticMetricsHelper : NSObject <APPCDiagnosticMetricsHelping, APPCMetricRegister> {

	 contextIdentifier;
	 promotedContentIdentifier;
	 primitiveCreator;
	 notificationOwner;

}
-(id)init;
-(void)registerHandlerForAllMetricsWithClosure:(/*^block*/id)arg1 ;
-(void)removeHandler;
-(void)loadFailedWithReason:(id)arg1 code:(long long)arg2 ;
-(void)templateMetricWithName:(id)arg1 argument:(id)arg2 ;
-(void)mediaPlaybackFailedWithReason:(id)arg1 ;
-(id)initWithContextIdentifier:(id)arg1 promotedContentIdentifier:(id)arg2 primitiveCreator:(id)arg3 notificationOwner:(id)arg4 ;
@end

