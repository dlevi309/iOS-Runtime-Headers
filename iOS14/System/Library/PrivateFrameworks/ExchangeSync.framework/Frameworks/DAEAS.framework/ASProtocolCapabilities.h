/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSString;

@interface ASProtocolCapabilities : NSObject {

	NSString* _calConstraintsPlistPath;
	NSString* _abConstraintsPlistPath;

}

@property (nonatomic,retain) NSString * calConstraintsPlistPath;              //@synthesize calConstraintsPlistPath=_calConstraintsPlistPath - In the implementation block
@property (nonatomic,retain) NSString * abConstraintsPlistPath;               //@synthesize abConstraintsPlistPath=_abConstraintsPlistPath - In the implementation block
-(BOOL)supportsMailboxSearch;
-(BOOL)supportsEmailFlagging;
-(BOOL)supportsDraftFolderSync;
-(BOOL)supportsConversations;
-(BOOL)supportsProtocolVersion:(id)arg1 ;
-(id)initWithProtocolVersionString:(id)arg1 ;
-(BOOL)supportsSettingsCommand;
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

