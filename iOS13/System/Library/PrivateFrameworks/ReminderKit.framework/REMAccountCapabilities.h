/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@interface REMAccountCapabilities : NSObject {

	BOOL _supportsSubtasks;
	BOOL _supportsAttachments;
	BOOL _supportsListAppearance;
	BOOL _supportsGroups;
	BOOL _supportsFlagged;
	BOOL _supportsPersonTrigger;
	BOOL _supportsLocation;
	BOOL _supportsHourlyRecurrence;
	BOOL _supportsEventKitSync;
	BOOL _supportsCloudKitSync;
	BOOL _supportsCalDAVNotifications;
	BOOL _supportsListSharees;
	BOOL _supportsListShareesMutation;
	BOOL _supportsMoveAcrossLists;
	BOOL _supportsMoveAcrossSharedToMeLists;
	BOOL _supportsHandoff;
	BOOL _supportsReminderActions;
	BOOL _supportsCRDTs;
	long long _defaultReminderPriorityLevel;

}

@property (nonatomic,readonly) BOOL supportsEventKitSync;                           //@synthesize supportsEventKitSync=_supportsEventKitSync - In the implementation block
@property (nonatomic,readonly) BOOL supportsCloudKitSync;                           //@synthesize supportsCloudKitSync=_supportsCloudKitSync - In the implementation block
@property (nonatomic,readonly) BOOL supportsCalDAVNotifications;                    //@synthesize supportsCalDAVNotifications=_supportsCalDAVNotifications - In the implementation block
@property (nonatomic,readonly) BOOL supportsListSharees;                            //@synthesize supportsListSharees=_supportsListSharees - In the implementation block
@property (nonatomic,readonly) BOOL supportsListShareesMutation;                    //@synthesize supportsListShareesMutation=_supportsListShareesMutation - In the implementation block
@property (nonatomic,readonly) BOOL supportsMoveAcrossLists;                        //@synthesize supportsMoveAcrossLists=_supportsMoveAcrossLists - In the implementation block
@property (nonatomic,readonly) BOOL supportsMoveAcrossSharedToMeLists;              //@synthesize supportsMoveAcrossSharedToMeLists=_supportsMoveAcrossSharedToMeLists - In the implementation block
@property (nonatomic,readonly) long long defaultReminderPriorityLevel;              //@synthesize defaultReminderPriorityLevel=_defaultReminderPriorityLevel - In the implementation block
@property (nonatomic,readonly) BOOL supportsHandoff;                                //@synthesize supportsHandoff=_supportsHandoff - In the implementation block
@property (nonatomic,readonly) BOOL supportsReminderActions;                        //@synthesize supportsReminderActions=_supportsReminderActions - In the implementation block
@property (nonatomic,readonly) BOOL supportsCRDTs;                                  //@synthesize supportsCRDTs=_supportsCRDTs - In the implementation block
@property (nonatomic,readonly) BOOL supportsSubtasks;                               //@synthesize supportsSubtasks=_supportsSubtasks - In the implementation block
@property (nonatomic,readonly) BOOL supportsAttachments;                            //@synthesize supportsAttachments=_supportsAttachments - In the implementation block
@property (nonatomic,readonly) BOOL supportsListAppearance;                         //@synthesize supportsListAppearance=_supportsListAppearance - In the implementation block
@property (nonatomic,readonly) BOOL supportsGroups;                                 //@synthesize supportsGroups=_supportsGroups - In the implementation block
@property (nonatomic,readonly) BOOL supportsFlagged;                                //@synthesize supportsFlagged=_supportsFlagged - In the implementation block
@property (nonatomic,readonly) BOOL supportsPersonTrigger;                          //@synthesize supportsPersonTrigger=_supportsPersonTrigger - In the implementation block
@property (nonatomic,readonly) BOOL supportsLocation;                               //@synthesize supportsLocation=_supportsLocation - In the implementation block
@property (nonatomic,readonly) BOOL supportsHourlyRecurrence;                       //@synthesize supportsHourlyRecurrence=_supportsHourlyRecurrence - In the implementation block
-(id)initWithAccountType:(long long)arg1 ;
-(BOOL)supportsHandoff;
-(BOOL)supportsAttachments;
-(BOOL)supportsSubtasks;
-(BOOL)supportsFlagged;
-(BOOL)supportsGroups;
-(BOOL)supportsListAppearance;
-(BOOL)supportsPersonTrigger;
-(BOOL)supportsLocation;
-(BOOL)supportsHourlyRecurrence;
-(BOOL)supportsEventKitSync;
-(BOOL)supportsCloudKitSync;
-(BOOL)supportsCalDAVNotifications;
-(BOOL)supportsListSharees;
-(BOOL)supportsListShareesMutation;
-(BOOL)supportsMoveAcrossLists;
-(BOOL)supportsMoveAcrossSharedToMeLists;
-(long long)defaultReminderPriorityLevel;
-(BOOL)supportsReminderActions;
-(BOOL)supportsCRDTs;
@end

