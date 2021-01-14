/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordKeyValueSetting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableSet, CKRecord, NSString;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {

	BOOL _trackChanges;
	NSMutableDictionary* _values;
	NSMutableDictionary* _originalValues;
	NSMutableSet* _changedKeysSet;
	CKRecord* _record;

}

@property (assign,nonatomic) BOOL trackChanges;                                 //@synthesize trackChanges=_trackChanges - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                          //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * values;                      //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * originalValues;              //@synthesize originalValues=_originalValues - In the implementation block
@property (nonatomic,retain) NSMutableSet * changedKeysSet;                     //@synthesize changedKeysSet=_changedKeysSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(CKRecord *)record;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)changedKeys;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSMutableDictionary *)values;
-(NSMutableDictionary *)originalValues;
-(void)setChangedKeysSet:(NSMutableSet *)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_validateRecordKey:(id)arg1 ;
-(void)_validateRecordValue:(id)arg1 ;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(void)resetChangedKeys;
-(id)initWithRecord:(id)arg1 ;
-(void)_sanitizeRecordValue:(id)arg1 ;
-(void)_validateKeyUniquenessForKey:(id)arg1 ;
-(BOOL)trackChanges;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObjectNoValidate:(id)arg1 forKey:(id)arg2 ;
-(BOOL)checkProperties:(BOOL)arg1 withValueCheckBlock:(/*^block*/id)arg2 ;
-(void)setNilValueForKey:(id)arg1 ;
-(id)allKeys;
-(NSMutableSet *)changedKeysSet;
-(id)recordID;
-(void)setOriginalValues:(NSMutableDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrackChanges:(BOOL)arg1 ;
-(BOOL)checkPropertiesWithModifiedPropertiesOnly:(BOOL)arg1 includingAllArrayItems:(BOOL)arg2 withValueCheckBlock:(/*^block*/id)arg3 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

