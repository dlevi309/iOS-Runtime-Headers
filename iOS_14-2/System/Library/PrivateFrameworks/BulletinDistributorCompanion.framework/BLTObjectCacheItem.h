/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithObject:(id)arg1 ;
-(void)touch;
-(id<NSSecureCoding>)object;
-(id)description;
-(double)lastAccessedDate;
@end

