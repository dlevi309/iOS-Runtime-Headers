/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/

#import <SyncedDefaults/SyncedDefaults-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYDStoreID;

@interface SYDStoreConfiguration : NSObject <NSSecureCoding, NSCopying> {

	SYDStoreID* _storeID;

}

@property (nonatomic,retain) SYDStoreID * storeID;              //@synthesize storeID=_storeID - In the implementation block
+(BOOL)supportsSecureCoding;
-(SYDStoreID *)storeID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStoreID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreID:(SYDStoreID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

