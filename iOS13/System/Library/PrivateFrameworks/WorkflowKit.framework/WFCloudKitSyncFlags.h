/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSString;

@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem> {

	BOOL _migratedVoiceShortcuts;
	CKRecordID* _identifier;

}

@property (assign,nonatomic) BOOL migratedVoiceShortcuts;              //@synthesize migratedVoiceShortcuts=_migratedVoiceShortcuts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                //@synthesize identifier=_identifier - In the implementation block
+(id)properties;
+(id)recordType;
+(id)recordIDWithZoneID:(id)arg1 ;
-(CKRecordID *)identifier;
-(id)initWithZoneID:(id)arg1 ;
-(void)setMigratedVoiceShortcuts:(BOOL)arg1 ;
-(BOOL)migratedVoiceShortcuts;
@end

