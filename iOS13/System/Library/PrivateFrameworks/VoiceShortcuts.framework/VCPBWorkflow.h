/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface VCPBWorkflow : PBCodable <NSCopying> {

	double _creationDate;
	unsigned long long _integerLastMigratedClientVersion;
	unsigned long long _integerMinimumClientVersion;
	double _modificationDate;
	NSData* _accessResourcePerWorkflowStateData;
	NSData* _actionsData;
	unsigned _iconColor;
	unsigned _iconGlyph;
	NSData* _importQuestionsData;
	NSMutableArray* _inputClasses;
	NSString* _lastMigratedClientVersion;
	NSString* _minimumClientVersion;
	NSString* _name;
	int _remoteQuarantineStatus;
	NSMutableArray* _workflowTypes;
	SCD_Struct_VC1 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasIconColor; 
@property (assign,nonatomic) unsigned iconColor;                                               //@synthesize iconColor=_iconColor - In the implementation block
@property (assign,nonatomic) BOOL hasIconGlyph; 
@property (assign,nonatomic) unsigned iconGlyph;                                               //@synthesize iconGlyph=_iconGlyph - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                                              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                                          //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * workflowTypes;                                   //@synthesize workflowTypes=_workflowTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * inputClasses;                                    //@synthesize inputClasses=_inputClasses - In the implementation block
@property (nonatomic,readonly) BOOL hasActionsData; 
@property (nonatomic,retain) NSData * actionsData;                                             //@synthesize actionsData=_actionsData - In the implementation block
@property (nonatomic,readonly) BOOL hasImportQuestionsData; 
@property (nonatomic,retain) NSData * importQuestionsData;                                     //@synthesize importQuestionsData=_importQuestionsData - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerMinimumClientVersion; 
@property (assign,nonatomic) unsigned long long integerMinimumClientVersion;                   //@synthesize integerMinimumClientVersion=_integerMinimumClientVersion - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerLastMigratedClientVersion; 
@property (assign,nonatomic) unsigned long long integerLastMigratedClientVersion;              //@synthesize integerLastMigratedClientVersion=_integerLastMigratedClientVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasMinimumClientVersion; 
@property (nonatomic,retain) NSString * minimumClientVersion;                                  //@synthesize minimumClientVersion=_minimumClientVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasLastMigratedClientVersion; 
@property (nonatomic,retain) NSString * lastMigratedClientVersion;                             //@synthesize lastMigratedClientVersion=_lastMigratedClientVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessResourcePerWorkflowStateData; 
@property (nonatomic,retain) NSData * accessResourcePerWorkflowStateData;                      //@synthesize accessResourcePerWorkflowStateData=_accessResourcePerWorkflowStateData - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteQuarantineStatus; 
@property (assign,nonatomic) int remoteQuarantineStatus;                                       //@synthesize remoteQuarantineStatus=_remoteQuarantineStatus - In the implementation block
+(Class)workflowTypesType;
+(Class)inputClassesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)modificationDate;
-(double)creationDate;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)inputClasses;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(BOOL)hasName;
-(unsigned)iconColor;
-(void)setIconColor:(unsigned)arg1 ;
-(void)setModificationDate:(double)arg1 ;
-(BOOL)hasModificationDate;
-(unsigned)iconGlyph;
-(NSMutableArray *)workflowTypes;
-(void)setWorkflowTypes:(NSMutableArray *)arg1 ;
-(void)setInputClasses:(NSMutableArray *)arg1 ;
-(NSString *)lastMigratedClientVersion;
-(void)setLastMigratedClientVersion:(NSString *)arg1 ;
-(NSString *)minimumClientVersion;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(int)remoteQuarantineStatus;
-(void)setRemoteQuarantineStatus:(int)arg1 ;
-(void)setIconGlyph:(unsigned)arg1 ;
-(NSData *)actionsData;
-(void)setActionsData:(NSData *)arg1 ;
-(NSData *)importQuestionsData;
-(void)setImportQuestionsData:(NSData *)arg1 ;
-(void)setHasIconColor:(BOOL)arg1 ;
-(BOOL)hasIconColor;
-(void)setHasIconGlyph:(BOOL)arg1 ;
-(BOOL)hasIconGlyph;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(void)clearWorkflowTypes;
-(void)addWorkflowTypes:(id)arg1 ;
-(unsigned long long)workflowTypesCount;
-(id)workflowTypesAtIndex:(unsigned long long)arg1 ;
-(void)clearInputClasses;
-(void)addInputClasses:(id)arg1 ;
-(unsigned long long)inputClassesCount;
-(id)inputClassesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasActionsData;
-(BOOL)hasImportQuestionsData;
-(void)setIntegerMinimumClientVersion:(unsigned long long)arg1 ;
-(void)setHasIntegerMinimumClientVersion:(BOOL)arg1 ;
-(BOOL)hasIntegerMinimumClientVersion;
-(void)setIntegerLastMigratedClientVersion:(unsigned long long)arg1 ;
-(void)setHasIntegerLastMigratedClientVersion:(BOOL)arg1 ;
-(BOOL)hasIntegerLastMigratedClientVersion;
-(BOOL)hasMinimumClientVersion;
-(BOOL)hasLastMigratedClientVersion;
-(BOOL)hasAccessResourcePerWorkflowStateData;
-(void)setHasRemoteQuarantineStatus:(BOOL)arg1 ;
-(BOOL)hasRemoteQuarantineStatus;
-(id)remoteQuarantineStatusAsString:(int)arg1 ;
-(int)StringAsRemoteQuarantineStatus:(id)arg1 ;
-(unsigned long long)integerMinimumClientVersion;
-(unsigned long long)integerLastMigratedClientVersion;
-(NSData *)accessResourcePerWorkflowStateData;
-(void)setAccessResourcePerWorkflowStateData:(NSData *)arg1 ;
@end

