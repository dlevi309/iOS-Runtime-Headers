/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol NSSecureCoding;
@interface BLTObjectCacheItem : NSObject {

	id<NSSecureCoding> _object;
	double _lastAccessedDate;

}

@property (nonatomic,readonly) id<NSSecureCoding> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) double lastAccessedDate;                //@synthesize lastAccessedDate=_lastAccessedDate - In the implementation block
+(id)cacheItemWithObject:(id)arg1 ;
-(id)description;
-(id<NSSecureCoding>)object;
-(id)initWithObject:(id)arg1 ;
-(void)touch;
-(double)lastAccessedDate;
@end

