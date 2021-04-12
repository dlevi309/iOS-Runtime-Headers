/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletinUpdate;

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding> {

	BBBulletinUpdate* _bulletinUpdate;
	unsigned long long _transactionID;

}

@property (nonatomic,copy,readonly) BBBulletinUpdate * bulletinUpdate;              //@synthesize bulletinUpdate=_bulletinUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)transactionWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BBBulletinUpdate *)bulletinUpdate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)transactionID;
-(BOOL)isEqual:(id)arg1 ;
@end

