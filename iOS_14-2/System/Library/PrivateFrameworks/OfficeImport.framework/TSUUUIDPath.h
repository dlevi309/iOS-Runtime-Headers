/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSUUID, NSString;

@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration> {

	NSArray* _uuids;

}

@property (nonatomic,readonly) NSArray * uuids;                        //@synthesize uuids=_uuids - In the implementation block
@property (nonatomic,readonly) NSUUID * lastUUID; 
@property (nonatomic,readonly) NSString * UUIDPathString; 
+(id)lastUUIDFromUUIDPathString:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(NSArray *)uuids;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(NSString *)UUIDPathString;
-(id)initWithUUIDPathString:(id)arg1 ;
-(id)UUIDPathByAppendingUUID:(id)arg1 ;
-(NSUUID *)lastUUID;
@end

