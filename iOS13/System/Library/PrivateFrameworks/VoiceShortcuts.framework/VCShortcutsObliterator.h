/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class VCCoreDuetListener, NSSet;

@interface VCShortcutsObliterator : NSObject {

	VCCoreDuetListener* _listener;
	NSSet* _syncDataHandlers;

}

@property (nonatomic,readonly) VCCoreDuetListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSSet * syncDataHandlers;                   //@synthesize syncDataHandlers=_syncDataHandlers - In the implementation block
-(VCCoreDuetListener *)listener;
-(void)obliterate:(id*)arg1 ;
-(id)initWithCoreDuetListener:(id)arg1 syncDataHandlers:(id)arg2 ;
-(BOOL)deleteKeychainItemsWithError:(id*)arg1 ;
-(BOOL)deleteAppGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteDataVaultWithError:(id*)arg1 ;
-(BOOL)terminateProcessWithIdentifier:(id)arg1 assertion:(out id*)arg2 error:(out id*)arg3 ;
-(void)resetWatchSync;
-(NSSet *)syncDataHandlers;
@end

