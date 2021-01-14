/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/VCSYChange.h>

@class NSString, WFRecord, WFDatabase, WFDatabaseObjectDescriptor;

@interface VCDatabaseChange : NSObject <VCSYChange> {

	NSString* _objectIdentifier;
	long long _changeType;
	WFRecord* _record;
	WFDatabase* _database;

}

@property (nonatomic,copy) WFRecord * record;                                             //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                                     //@synthesize database=_database - In the implementation block
@property (nonatomic,copy,readonly) WFDatabaseObjectDescriptor * descriptor; 
@property (nonatomic,readonly) unsigned long long estimatedSize; 
@property (nonatomic,readonly) NSString * objectIdentifier;                               //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                                      //@synthesize changeType=_changeType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sequencer; 
+(int)messageType;
+(Class)recordClass;
+(unsigned long long)databaseObjectType;
+(id)recordProperties;
-(WFRecord *)record;
-(long long)changeType;
-(unsigned long long)estimatedSize;
-(void)setRecord:(WFRecord *)arg1 ;
-(WFDatabaseObjectDescriptor *)descriptor;
-(NSString *)description;
-(NSString *)sequencer;
-(NSString *)objectIdentifier;
-(WFDatabase *)database;
-(BOOL)writeTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)readFrom:(id)arg1 error:(id*)arg2 ;
-(id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2 ;
-(id)initWithDescriptor:(id)arg1 inDatabase:(id)arg2 changeType:(long long)arg3 ;
-(id)recordWithError:(id*)arg1 ;
@end

