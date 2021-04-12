/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSMutableDictionary, NSString;

@interface EDUserNotificationMailboxCutoffController : NSObject <EFLoggable> {

	NSMutableDictionary* _mailboxCutoffs;

}

@property (nonatomic,retain) NSMutableDictionary * mailboxCutoffs;              //@synthesize mailboxCutoffs=_mailboxCutoffs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)_initializeIfNeeded;
-(NSMutableDictionary *)mailboxCutoffs;
-(BOOL)_shouldUpdateCutoffForMessage:(id)arg1 ;
-(BOOL)_updateCutoffForMailbox:(id)arg1 date:(id)arg2 ;
-(void)_writeToDefaults;
-(void)_readFromDefaults;
-(void)setMailboxCutoffs:(NSMutableDictionary *)arg1 ;
-(id)cutoffDateForMailbox:(id)arg1 ;
-(BOOL)isMessageAboveMailboxCutoff:(id)arg1 ;
-(void)updateCutoffForMailboxesWithMessages:(id)arg1 ;
-(void)clearCutoffForMailbox:(id)arg1 ;
@end

