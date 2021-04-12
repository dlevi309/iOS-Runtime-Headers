/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

@class NSDate, NSSet;


@protocol HKSPObject <NSObject,NSSecureCoding,NSCopying,NSMutableCopying>
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@optional
-(NSDate *)lastModifiedDate;
-(NSSet *)significantChanges;

@required
-(BOOL)isEquivalentTo:(id)arg1;
-(id)mutableCopy;
-(void)copyFromObject:(id)arg1;
-(id)initFromObject:(id)arg1;
-(unsigned long long)version;

@end

