/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
*/

@class NSString, NSUUID, NSArray;


@protocol ACXSyncedApp <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSUUID * databaseUUID; 
@property (nonatomic,readonly) unsigned long long sequenceNumber; 
@property (nonatomic,copy,readonly) NSArray * counterpartIdentifiers; 
@property (nonatomic,readonly) unsigned long long applicationType; 
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (nonatomic,readonly) BOOL isDeletable; 
@required
-(NSString *)bundleIdentifier;
-(unsigned long long)sequenceNumber;
-(unsigned long long)applicationType;
-(BOOL)isDeletable;
-(NSArray *)counterpartIdentifiers;
-(NSUUID *)databaseUUID;
-(BOOL)isSystemApp;
-(id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
-(id)serializeAsRemoteApplication;

@end

