/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMDAChangedIdentifierResult.h>

@class NSUUID, NSString;

@interface REMDAShareeTombstone : NSObject <REMDAChangedIdentifierResult> {

	NSUUID* _objectIdentifier;
	NSUUID* _owningListIdentifier;
	NSString* _displayName;
	NSString* _address;

}

@property (nonatomic,retain) NSUUID * objectIdentifier;                  //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * owningListIdentifier;              //@synthesize owningListIdentifier=_owningListIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * address;                         //@synthesize address=_address - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObjectIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)owningListIdentifier;
-(void)setOwningListIdentifier:(NSUUID *)arg1 ;
-(NSString *)description;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSUUID *)objectIdentifier;
-(NSString *)displayName;
@end

