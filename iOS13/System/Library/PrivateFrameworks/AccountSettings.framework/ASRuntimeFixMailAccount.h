/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
*/

#import <libobjc.A.dylib/ASRuntimeFixProtocol.h>

@class NSSet, NSString;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {

	BOOL _shouldNotifyMobileMail;
	NSSet* _supportedMailClasses;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)supportedAccountTypes;
-(int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2 ;
-(void)accountsHaveBeenSaved:(BOOL)arg1 ;
-(BOOL)_cleanupAccountClass:(id)arg1 ;
@end

