/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class NSUUID, NSString, NSArray, NSSet, NSDate, NSData, NSDictionary;

@interface AXSSPunctuationGroup : NSObject {

	BOOL _inCloud;
	BOOL _inDatabase;
	unsigned short _version;
	NSUUID* _uuid;
	NSString* _name;
	NSArray* _entries;
	NSSet* _autoSwitchContexts;
	NSUUID* _basePunctuationUUID;
	NSString* _ckChangeTag;
	NSDate* _lastModifiedDate;
	NSDate* _ckRecordProcessDate;

}

@property (nonatomic,retain) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * entries;                            //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) NSSet * autoSwitchContexts;                   //@synthesize autoSwitchContexts=_autoSwitchContexts - In the implementation block
@property (nonatomic,retain) NSUUID * basePunctuationUUID;                 //@synthesize basePunctuationUUID=_basePunctuationUUID - In the implementation block
@property (assign,nonatomic) unsigned short version;                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL inCloud;                                 //@synthesize inCloud=_inCloud - In the implementation block
@property (nonatomic,retain) NSString * ckChangeTag;                       //@synthesize ckChangeTag=_ckChangeTag - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                    //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * ckRecordProcessDate;                 //@synthesize ckRecordProcessDate=_ckRecordProcessDate - In the implementation block
@property (assign,nonatomic) BOOL inDatabase;                              //@synthesize inDatabase=_inDatabase - In the implementation block
@property (nonatomic,readonly) BOOL isSystemPunctuationGroup; 
@property (nonatomic,readonly) NSData * jsonRepresentation; 
@property (nonatomic,readonly) NSDictionary * jsonDictionary; 
+(id)punctuationGroupFromJSONRepresentation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned short)version;
-(void)setVersion:(unsigned short)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
-(NSDate *)lastModifiedDate;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDictionary *)jsonDictionary;
-(NSData *)jsonRepresentation;
-(void)setInCloud:(BOOL)arg1 ;
-(BOOL)inCloud;
-(BOOL)isSystemPunctuationGroup;
-(NSUUID *)basePunctuationUUID;
-(void)setBasePunctuationUUID:(NSUUID *)arg1 ;
-(NSSet *)autoSwitchContexts;
-(void)setAutoSwitchContexts:(NSSet *)arg1 ;
-(void)setCkChangeTag:(NSString *)arg1 ;
-(void)setCkRecordProcessDate:(NSDate *)arg1 ;
-(NSString *)ckChangeTag;
-(NSDate *)ckRecordProcessDate;
-(void)setInDatabase:(BOOL)arg1 ;
-(BOOL)inDatabase;
@end

