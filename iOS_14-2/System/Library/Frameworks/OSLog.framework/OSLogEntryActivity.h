/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
*/

#import <OSLog/OSLogEntry.h>
#import <OSLog/OSLogEntryFromProcess.h>

@class NSString;

@interface OSLogEntryActivity : OSLogEntry <OSLogEntryFromProcess> {

	int _processIdentifier;
	unsigned long long _activityIdentifier;
	NSString* _process;
	NSString* _sender;
	unsigned long long _threadIdentifier;
	unsigned long long _parentActivityIdentifier;

}

@property (nonatomic,readonly) unsigned long long parentActivityIdentifier;              //@synthesize parentActivityIdentifier=_parentActivityIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long activityIdentifier;                    //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * process;                                       //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                                    //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                        //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) unsigned long long threadIdentifier;                      //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
-(NSString *)process;
-(unsigned long long)threadIdentifier;
-(NSString *)sender;
-(id)initWithEventProxy:(id)arg1 ;
-(int)processIdentifier;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)activityIdentifier;
@end

