/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject, NSUUID;

@interface PPFixup49995922Tuple : NSObject <NSCopying> {

	long long _rowid;
	NSObject* _record;
	NSUUID* _dkUUID;

}

@property (nonatomic,readonly) long long rowid;                //@synthesize rowid=_rowid - In the implementation block
@property (nonatomic,readonly) NSObject * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) NSUUID * dkUUID;                //@synthesize dkUUID=_dkUUID - In the implementation block
+(id)tupleWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3 ;
-(NSObject *)record;
-(id)init;
-(long long)rowid;
-(NSUUID *)dkUUID;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3 ;
-(BOOL)isEqualToTuple:(id)arg1 ;
@end

