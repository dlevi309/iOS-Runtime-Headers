/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCDatabaseChange.h>

@interface VCWorkflowChange : VCDatabaseChange {

	unsigned long long _syncHash;

}

@property (nonatomic,readonly) unsigned long long syncHash;              //@synthesize syncHash=_syncHash - In the implementation block
+(int)messageType;
+(Class)recordClass;
+(unsigned long long)syncHashForRecord:(id)arg1 ;
-(unsigned long long)syncHash;
@end

