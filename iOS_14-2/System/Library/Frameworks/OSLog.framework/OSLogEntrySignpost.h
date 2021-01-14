/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
*/

#import <OSLog/OSLogEntry.h>
#import <OSLog/OSLogEntryFromProcess.h>
#import <OSLog/OSLogEntryWithPayload.h>

@class NSString, NSArray;

@interface OSLogEntrySignpost : OSLogEntry <OSLogEntryFromProcess, OSLogEntryWithPayload> {

	int _processIdentifier;
	unsigned long long _activityIdentifier;
	NSString* _process;
	NSString* _sender;
	unsigned long long _threadIdentifier;
	NSString* _category;
	NSArray* _components;
	NSString* _formatString;
	NSString* _subsystem;
	unsigned long long _signpostIdentifier;
	NSString* _signpostName;
	long long _signpostType;

}

@property (nonatomic,readonly) unsigned long long signpostIdentifier;              //@synthesize signpostIdentifier=_signpostIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * signpostName;                            //@synthesize signpostName=_signpostName - In the implementation block
@property (nonatomic,readonly) long long signpostType;                             //@synthesize signpostType=_signpostType - In the implementation block
@property (nonatomic,readonly) unsigned long long activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * process;                                 //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                  //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) unsigned long long threadIdentifier;                //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * category;                                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSArray * components;                               //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSString * formatString;                            //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,readonly) NSString * subsystem;                               //@synthesize subsystem=_subsystem - In the implementation block
-(NSString *)process;
-(long long)signpostType;
-(unsigned long long)threadIdentifier;
-(NSString *)formatString;
-(NSString *)sender;
-(id)initWithEventProxy:(id)arg1 ;
-(int)processIdentifier;
-(NSString *)subsystem;
-(NSString *)category;
-(NSArray *)components;
-(unsigned long long)activityIdentifier;
-(NSString *)signpostName;
-(unsigned long long)signpostIdentifier;
@end

