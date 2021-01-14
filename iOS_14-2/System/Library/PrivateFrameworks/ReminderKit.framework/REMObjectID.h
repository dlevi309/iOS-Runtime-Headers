/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDAChangedIdentifierResult.h>
#import <libobjc.A.dylib/REMCRMergeableDataType.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSURL;

@interface REMObjectID : NSObject <REMDAChangedIdentifierResult, REMCRMergeableDataType, NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _entityName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                        //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSString * stringRepresentation; 
@property (nonatomic,readonly) NSURL * urlRepresentation; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)objectIDWithURL:(id)arg1 ;
+(void)rem_registerClassAtCRCoderIfNeeded;
+(id)objectIDWithUUID:(id)arg1 entityName:(id)arg2 ;
-(NSString *)entityName;
-(NSString *)stringRepresentation;
-(NSUUID *)uuid;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(NSURL *)urlRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)initWithUUID:(id)arg1 entityName:(id)arg2 ;
-(NSString *)description;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)tombstone;
-(id)redactedDescription;
-(id)initWithCRCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

