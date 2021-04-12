/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct EFAtomicObject {
	Aq cfObject;
} EFAtomicObject;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct {
	unsigned timestamp : 1;
	unsigned eventName : 1;
	unsigned sequenceNumber : 1;
} SCD_Struct_ED5;

typedef struct {
	unsigned accountId : 1;
	unsigned conversationId : 1;
	unsigned mailboxId : 1;
	unsigned messageId : 1;
	unsigned mailboxType : 1;
	unsigned value : 1;
} SCD_Struct_ED6;

typedef struct {
	unsigned accountId : 1;
	unsigned conversationId : 1;
	unsigned mailboxId : 1;
	unsigned messageId : 1;
	unsigned mailboxType : 1;
} SCD_Struct_ED7;

typedef struct {
	unsigned conversationId : 1;
	unsigned value : 1;
} SCD_Struct_ED8;

typedef struct {
	unsigned accountId : 1;
	unsigned conversationId : 1;
	unsigned fromMailboxId : 1;
	unsigned messageId : 1;
	unsigned toMailboxId : 1;
	unsigned fromMailboxType : 1;
	unsigned toMailboxType : 1;
} SCD_Struct_ED9;

typedef struct {
	unsigned messageId : 1;
} SCD_Struct_ED10;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_ED11;

typedef struct {
	BOOL list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_ED12;

typedef struct {
	unsigned dateReceived : 1;
	unsigned listId : 1;
	unsigned sender : 1;
	unsigned senderContactId : 1;
	unsigned senderDomain : 1;
	unsigned messageIsForwarded : 1;
	unsigned messageIsReply : 1;
	unsigned senderIsVip : 1;
	unsigned userIsBcc : 1;
	unsigned userIsCc : 1;
	unsigned userIsSender : 1;
	unsigned userIsTo : 1;
} SCD_Struct_ED13;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned droppedEventsCount : 1;
	unsigned timestamp : 1;
	unsigned sequenceNumber : 1;
	unsigned timezoneOffset : 1;
} SCD_Struct_ED16;

