/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)applicationType;
-(NSArray *)counterpartIdentifiers;
-(NSString *)bundleIdentifier;
-(unsigned long long)sequenceNumber;
-(BOOL)isSystemApp;
-(BOOL)isDeletable;
-(NSUUID *)databaseUUID;
-(id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
-(id)serializeAsRemoteApplication;

@end

