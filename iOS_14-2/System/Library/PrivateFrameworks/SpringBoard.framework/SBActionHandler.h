/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFActionProviding.h>

@class NSHashTable, NSString;

@interface SBActionHandler : NSObject <SBFActionProviding> {

	BOOL _capturingDisplayDump;
	NSHashTable* _externalHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_captureRadarAttachmentsWithCompletion:(/*^block*/id)arg1 ;
-(void)_executeRestartAction:(id)arg1 fromProcess:(id)arg2 ;
-(void)handleActions:(id)arg1 origin:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_reportAndKillInsecureProcesses:(id)arg1 ;
-(void)removeActionHandler:(id)arg1 ;
-(void)addActionHandler:(id)arg1 ;
-(BOOL)_shouldPromptForSecureDrawViolations;
@end

