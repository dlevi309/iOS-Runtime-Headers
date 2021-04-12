/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

@class NSDate, HKSPChangeSet;


@protocol HKSPMutableObject <HKSPObject>
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet; 
@required
-(void)freeze;
-(HKSPChangeSet *)changeSet;
-(NSDate *)lastModifiedDate;
-(void)setLastModifiedDate:(id)arg1;

@end

