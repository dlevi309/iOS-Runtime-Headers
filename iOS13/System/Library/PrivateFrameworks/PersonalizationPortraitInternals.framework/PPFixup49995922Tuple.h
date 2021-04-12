/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)record;
-(id)initWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3 ;
-(BOOL)isEqualToTuple:(id)arg1 ;
-(long long)rowid;
-(NSUUID *)dkUUID;
@end

