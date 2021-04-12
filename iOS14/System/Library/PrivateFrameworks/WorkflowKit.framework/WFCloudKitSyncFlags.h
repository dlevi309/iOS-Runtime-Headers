/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSData, NSString;

@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem> {

	BOOL _migratedVoiceShortcuts;
	CKRecordID* _identifier;
	NSData* _recordSystemFieldsData;
	long long _defaultShortcutsVersion;

}

@property (assign,nonatomic) BOOL migratedVoiceShortcuts;                    //@synthesize migratedVoiceShortcuts=_migratedVoiceShortcuts - In the implementation block
@property (assign,nonatomic) long long defaultShortcutsVersion;              //@synthesize defaultShortcutsVersion=_defaultShortcutsVersion - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData;                  //@synthesize recordSystemFieldsData=_recordSystemFieldsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)recordType;
+(id)recordIDWithZoneID:(id)arg1 ;
+(BOOL)isCloudKitSyncFlagsRecordID:(id)arg1 ;
-(void)setDefaultShortcutsVersion:(long long)arg1 ;
-(long long)defaultShortcutsVersion;
-(CKRecordID *)identifier;
-(id)initWithZoneID:(id)arg1 ;
-(NSData *)recordSystemFieldsData;
-(BOOL)migratedVoiceShortcuts;
-(void)setRecordSystemFieldsData:(NSData *)arg1 ;
-(void)setMigratedVoiceShortcuts:(BOOL)arg1 ;
@end

