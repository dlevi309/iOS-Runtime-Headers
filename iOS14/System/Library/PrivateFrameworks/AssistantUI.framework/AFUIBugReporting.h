/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUIBugReporting <NSObject>
@property (assign,nonatomic,__weak) id<AFUIBugReportingDelegate> delegate; 
@optional
-(void)setComponentName:(id)arg1 componentVersion:(id)arg2 componentID:(id)arg3;
-(void)setEmailGroup:(id)arg1;

@required
-(id<AFUIBugReportingDelegate>)delegate;
-(void)setTitle:(id)arg1;
-(unsigned long long)maximumAttachmentSize;
-(void)setDelegate:(id)arg1;
-(void)setHostname:(id)arg1;
-(void)attachFileAtPath:(id)arg1 image:(BOOL)arg2;
-(BOOL)canReportBugs;
-(void)composeBugReport;
-(void)setSiriLanguage:(id)arg1;
-(void)setLastUserText:(id)arg1;
-(void)setIncludeSysdiagnosesFromDevices:(id)arg1;
-(void)setContextCollectorsInfo:(id)arg1;
-(void)setKeywordIdentifiers:(id)arg1;
-(void)attachData:(id)arg1 name:(id)arg2 mimeType:(id)arg3;

@end

