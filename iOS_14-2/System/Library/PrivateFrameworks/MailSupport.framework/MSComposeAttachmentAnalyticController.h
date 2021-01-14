/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@class MSDiagnosticManager;

@interface MSComposeAttachmentAnalyticController : NSObject {

	long long _totalDrawingsInsertedCount;
	MSDiagnosticManager* _diagnosticManager;

}

@property (nonatomic,retain) MSDiagnosticManager * diagnosticManager;              //@synthesize diagnosticManager=_diagnosticManager - In the implementation block
-(void)_submitFinalDrawingInsertCount:(long long)arg1 sentMessage:(BOOL)arg2 ;
-(MSDiagnosticManager *)diagnosticManager;
-(id)initWithDiagnosticManager:(id)arg1 totalDrawingsInsertedCount:(long long)arg2 ;
-(void)sendMessageWithActualDrawingInsertCount:(long long)arg1 ;
-(void)abandonMessageWithActualDrawingInsertCount:(long long)arg1 ;
-(void)setDiagnosticManager:(MSDiagnosticManager *)arg1 ;
@end

