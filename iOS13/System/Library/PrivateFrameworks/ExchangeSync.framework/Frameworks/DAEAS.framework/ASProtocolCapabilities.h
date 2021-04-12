/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSString;

@interface ASProtocolCapabilities : NSObject {

	NSString* _calConstraintsPlistPath;
	NSString* _abConstraintsPlistPath;

}

@property (nonatomic,retain) NSString * calConstraintsPlistPath;              //@synthesize calConstraintsPlistPath=_calConstraintsPlistPath - In the implementation block
@property (nonatomic,retain) NSString * abConstraintsPlistPath;               //@synthesize abConstraintsPlistPath=_abConstraintsPlistPath - In the implementation block
-(BOOL)supportsConversations;
-(BOOL)supportsMailboxSearch;
-(BOOL)supportsEmailFlagging;
-(BOOL)supportsDraftFolderSync;
-(BOOL)supportsSettingsCommand;
-(BOOL)supportsProtocolVersion:(id)arg1 ;
-(id)initWithProtocolVersionString:(id)arg1 ;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(BOOL)supportsNoteSyncing;
-(BOOL)supportsFreeBusyLookup;
-(id)_calConstraintsPlistPath;
-(id)_abConstraintsPlistPath;
-(NSString *)calConstraintsPlistPath;
-(void)setCalConstraintsPlistPath:(NSString *)arg1 ;
-(NSString *)abConstraintsPlistPath;
-(void)setAbConstraintsPlistPath:(NSString *)arg1 ;
@end

