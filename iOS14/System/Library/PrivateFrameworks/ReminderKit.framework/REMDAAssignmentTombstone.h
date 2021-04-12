/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMDAChangedIdentifierResult.h>

@class NSUUID, NSString;

@interface REMDAAssignmentTombstone : NSObject <REMDAChangedIdentifierResult> {

	NSUUID* _objectIdentifier;
	NSUUID* _owningReminderIdentifier;

}

@property (nonatomic,retain) NSUUID * objectIdentifier;                      //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * owningReminderIdentifier;              //@synthesize owningReminderIdentifier=_owningReminderIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObjectIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)owningReminderIdentifier;
-(void)setOwningReminderIdentifier:(NSUUID *)arg1 ;
-(NSString *)description;
-(NSUUID *)objectIdentifier;
@end

