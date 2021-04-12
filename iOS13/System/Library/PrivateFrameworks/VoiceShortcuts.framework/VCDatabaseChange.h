/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
+(int)messageType;
+(Class)recordClass;
+(id)recordProperties;
-(NSString *)description;
-(long long)changeType;
-(WFDatabase *)database;
-(WFDatabaseObjectDescriptor *)descriptor;
-(WFRecord *)record;
-(void)setRecord:(WFRecord *)arg1 ;
-(NSString *)objectIdentifier;
-(unsigned long long)estimatedSize;
-(NSString *)sequencer;
-(BOOL)writeTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)readFrom:(id)arg1 error:(id*)arg2 ;
-(id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2 ;
-(id)recordWithError:(id*)arg1 ;
-(id)initWithDescriptor:(id)arg1 inDatabase:(id)arg2 changeType:(long long)arg3 ;
@end

