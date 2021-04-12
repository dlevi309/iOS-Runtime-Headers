/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FCJSONRecordSourceSchema : NSObject <NSCopying> {

	NSString* _recordType;
	NSString* _recordIDPrefix;
	NSArray* _keys;
	NSArray* _localizableKeys;
	NSArray* _alwaysLocalizedKeys;
	NSArray* _allKeys;

}

@property (nonatomic,copy,readonly) NSString * recordType;                      //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordIDPrefix;                  //@synthesize recordIDPrefix=_recordIDPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSArray * keys;                             //@synthesize keys=_keys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * localizableKeys;                  //@synthesize localizableKeys=_localizableKeys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * alwaysLocalizedKeys;              //@synthesize alwaysLocalizedKeys=_alwaysLocalizedKeys - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allKeys;                          //@synthesize allKeys=_allKeys - In the implementation block
-(NSArray *)keys;
-(NSString *)recordType;
-(NSArray *)alwaysLocalizedKeys;
-(id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4 alwaysLocalizedKeys:(id)arg5 ;
-(id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4 ;
-(NSString *)recordIDPrefix;
-(NSArray *)localizableKeys;
-(NSArray *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

