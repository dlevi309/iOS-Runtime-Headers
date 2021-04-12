/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFActionProviding.h>

@class NSHashTable, NSString;

@interface SBActionHandler : NSObject <SBFActionProviding> {

	BOOL _capturingDisplayDump;
	NSHashTable* _externalHandlers;

}

@property (nonatomic,retain) NSHashTable * externalHandlers;              //@synthesize externalHandlers=_externalHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)removeActionHandler:(id)arg1 ;
-(void)addActionHandler:(id)arg1 ;
-(void)handleActions:(id)arg1 origin:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_reportAndKillInsecureProcesses:(id)arg1 ;
-(void)_executeRestartAction:(id)arg1 fromProcess:(id)arg2 ;
-(BOOL)_shouldPromptForSecureDrawViolations;
-(void)_captureRadarAttachmentsWithCompletion:(/*^block*/id)arg1 ;
-(NSHashTable *)externalHandlers;
-(void)setExternalHandlers:(NSHashTable *)arg1 ;
@end

