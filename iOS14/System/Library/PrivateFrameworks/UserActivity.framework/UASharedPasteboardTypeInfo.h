/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID, NSNumber, NSFileHandle;

@interface UASharedPasteboardTypeInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _preferFileRep;
	NSString* _type;
	NSUUID* _uuid;
	NSNumber* _offset;
	long long _size;
	NSFileHandle* _dataFile;
	NSString* _typeHint;
	NSNumber* _index;

}

@property (copy) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (copy) NSUUID * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (copy) NSNumber * offset;                      //@synthesize offset=_offset - In the implementation block
@property (assign) long long size;                       //@synthesize size=_size - In the implementation block
@property (retain) NSFileHandle * dataFile;              //@synthesize dataFile=_dataFile - In the implementation block
@property (assign) BOOL preferFileRep;                   //@synthesize preferFileRep=_preferFileRep - In the implementation block
@property (copy) NSString * typeHint;                    //@synthesize typeHint=_typeHint - In the implementation block
@property (copy) NSNumber * index;                       //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)index;
-(NSUUID *)uuid;
-(long long)size;
-(void)setIndex:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSNumber *)offset;
-(id)description;
-(NSFileHandle *)dataFile;
-(NSString *)typeHint;
-(NSString *)type;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(void)setOffset:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreferFileRep:(BOOL)arg1 ;
-(void)setTypeHint:(NSString *)arg1 ;
-(BOOL)preferFileRep;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

