/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSArray *)uuids;
-(NSString *)UUIDPathString;
-(id)initWithUUIDPathString:(id)arg1 ;
-(id)UUIDPathByAppendingUUID:(id)arg1 ;
-(NSUUID *)lastUUID;
@end

