/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sectionID;
-(id)keyString;
-(NSString *)publisherMatchID;
-(id)initWithSectionID:(id)arg1 publisherMatchID:(id)arg2 ;
@end

