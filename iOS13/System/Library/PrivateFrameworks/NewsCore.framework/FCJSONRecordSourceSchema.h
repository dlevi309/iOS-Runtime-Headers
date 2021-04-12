/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)allKeys;
-(NSArray *)keys;
-(NSString *)recordType;
-(NSArray *)localizableKeys;
-(NSArray *)alwaysLocalizedKeys;
-(NSString *)recordIDPrefix;
-(id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4 alwaysLocalizedKeys:(id)arg5 ;
-(id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4 ;
@end

