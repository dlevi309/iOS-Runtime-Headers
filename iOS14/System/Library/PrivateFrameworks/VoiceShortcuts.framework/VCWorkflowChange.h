/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCDatabaseChange.h>

@interface VCWorkflowChange : VCDatabaseChange {

	long long _syncHash;

}

@property (nonatomic,readonly) long long syncHash;              //@synthesize syncHash=_syncHash - In the implementation block
+(int)messageType;
+(Class)recordClass;
+(unsigned long long)databaseObjectType;
+(long long)syncHashForRecord:(id)arg1 ;
-(long long)syncHash;
@end

