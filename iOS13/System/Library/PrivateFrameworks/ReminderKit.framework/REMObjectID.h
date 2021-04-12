/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)objectIDWithUUID:(id)arg1 entityName:(id)arg2 ;
+(void)rem_registerClassAtCRCoderIfNeeded;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSString *)stringRepresentation;
-(NSString *)entityName;
-(id)tombstone;
-(void)setDocument:(id)arg1 ;
-(NSURL *)urlRepresentation;
-(id)initWithCRCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 entityName:(id)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
@end

