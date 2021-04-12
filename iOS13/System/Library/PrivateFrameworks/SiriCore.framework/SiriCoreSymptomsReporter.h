/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@interface SiriCoreSymptomsReporter : NSObject
+(id)sharedInstance;
-(id)_processNameForPid:(int)arg1 ;
-(void)_getTypeForError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_subtypeContextStringFromContext:(id)arg1 ;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5 triggerForIDSIdentifiers:(id)arg6 ;
-(void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(BOOL)arg5 ;
@end

