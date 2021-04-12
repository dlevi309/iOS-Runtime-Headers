/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _supportsMoveAcrossSharedLists;
	BOOL _supportsMultipleDateAlarmsOnRecurrence;
	BOOL _supportsHandoff;
	BOOL _supportsReminderActions;
	BOOL _supportsCRDTs;
	BOOL _supportsAssignments;
	BOOL _insertsCompletedRecurrentCloneAtTail;
	long long _defaultReminderPriorityLevel;

}

@property (nonatomic,readonly) BOOL supportsEventKitSync;                                //@synthesize supportsEventKitSync=_supportsEventKitSync - In the implementation block
@property (nonatomic,readonly) BOOL supportsCloudKitSync;                                //@synthesize supportsCloudKitSync=_supportsCloudKitSync - In the implementation block
@property (nonatomic,readonly) BOOL supportsCalDAVNotifications;                         //@synthesize supportsCalDAVNotifications=_supportsCalDAVNotifications - In the implementation block
@property (nonatomic,readonly) BOOL supportsListSharees;                                 //@synthesize supportsListSharees=_supportsListSharees - In the implementation block
@property (nonatomic,readonly) BOOL supportsListShareesMutation;                         //@synthesize supportsListShareesMutation=_supportsListShareesMutation - In the implementation block
@property (nonatomic,readonly) BOOL supportsMoveAcrossLists;                             //@synthesize supportsMoveAcrossLists=_supportsMoveAcrossLists - In the implementation block
@property (nonatomic,readonly) BOOL supportsMoveAcrossSharedLists;                       //@synthesize supportsMoveAcrossSharedLists=_supportsMoveAcrossSharedLists - In the implementation block
@property (nonatomic,readonly) BOOL supportsMultipleDateAlarmsOnRecurrence;              //@synthesize supportsMultipleDateAlarmsOnRecurrence=_supportsMultipleDateAlarmsOnRecurrence - In the implementation block
@property (nonatomic,readonly) long long defaultReminderPriorityLevel;                   //@synthesize defaultReminderPriorityLevel=_defaultReminderPriorityLevel - In the implementation block
@property (nonatomic,readonly) BOOL supportsHandoff;                                     //@synthesize supportsHandoff=_supportsHandoff - In the implementation block
@property (nonatomic,readonly) BOOL supportsReminderActions;                             //@synthesize supportsReminderActions=_supportsReminderActions - In the implementation block
@property (nonatomic,readonly) BOOL supportsCRDTs;                                       //@synthesize supportsCRDTs=_supportsCRDTs - In the implementation block
@property (nonatomic,readonly) BOOL supportsAssignments;                                 //@synthesize supportsAssignments=_supportsAssignments - In the implementation block
@property (nonatomic,readonly) BOOL insertsCompletedRecurrentCloneAtTail;                //@synthesize insertsCompletedRecurrentCloneAtTail=_insertsCompletedRecurrentCloneAtTail - In the implementation block
@property (nonatomic,readonly) BOOL supportsSubtasks;                                    //@synthesize supportsSubtasks=_supportsSubtasks - In the implementation block
@property (nonatomic,readonly) BOOL supportsAttachments;                                 //@synthesize supportsAttachments=_supportsAttachments - In the implementation block
@property (nonatomic,readonly) BOOL supportsListAppearance;                              //@synthesize supportsListAppearance=_supportsListAppearance - In the implementation block
@property (nonatomic,readonly) BOOL supportsGroups;                                      //@synthesize supportsGroups=_supportsGroups - In the implementation block
@property (nonatomic,readonly) BOOL supportsFlagged;                                     //@synthesize supportsFlagged=_supportsFlagged - In the implementation block
@property (nonatomic,readonly) BOOL supportsPersonTrigger;                               //@synthesize supportsPersonTrigger=_supportsPersonTrigger - In the implementation block
@property (nonatomic,readonly) BOOL supportsLocation;                                    //@synthesize supportsLocation=_supportsLocation - In the implementation block
@property (nonatomic,readonly) BOOL supportsHourlyRecurrence;                            //@synthesize supportsHourlyRecurrence=_supportsHourlyRecurrence - In the implementation block
-(long long)defaultReminderPriorityLevel;
-(BOOL)supportsMoveAcrossLists;
-(BOOL)supportsListSharees;
-(BOOL)supportsMultipleDateAlarmsOnRecurrence;
-(BOOL)supportsAttachments;
-(BOOL)insertsCompletedRecurrentCloneAtTail;
-(id)initWithAccountType:(long long)arg1 ;
-(BOOL)supportsMoveAcrossSharedLists;
-(BOOL)supportsGroups;
-(BOOL)supportsHourlyRecurrence;
-(BOOL)supportsListShareesMutation;
-(BOOL)supportsSubtasks;
-(BOOL)supportsPersonTrigger;
-(BOOL)supportsHandoff;
-(BOOL)supportsCalDAVNotifications;
-(BOOL)supportsEventKitSync;
-(BOOL)supportsCRDTs;
-(BOOL)supportsReminderActions;
-(BOOL)supportsFlagged;
-(BOOL)supportsCloudKitSync;
-(BOOL)supportsLocation;
-(BOOL)supportsAssignments;
-(BOOL)supportsListAppearance;
@end

