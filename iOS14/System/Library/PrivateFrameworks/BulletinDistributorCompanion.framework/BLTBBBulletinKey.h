/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTBBBulletinKey : NSObject <NSCopying> {

	NSString* _sectionID;
	NSString* _publisherMatchID;

}

@property (nonatomic,copy,readonly) NSString * sectionID;                     //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherMatchID;              //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
+(id)bulletinKeyWithSectionID:(id)arg1 publisherMatchID:(id)arg2 ;
-(id)keyString;
-(NSString *)sectionID;
-(NSString *)publisherMatchID;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSectionID:(id)arg1 publisherMatchID:(id)arg2 ;
@end

