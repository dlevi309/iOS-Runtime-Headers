/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSDate;


@protocol PXConfigurableFeedSectionInfosManager
@property (assign,nonatomic) long long entryFilter; 
@property (nonatomic,retain) NSDate * earliestDate; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@required
-(unsigned long long)fetchLimit;
-(long long)entryFilter;
-(void)setEntryFilter:(long long)arg1;
-(void)setEarliestDate:(id)arg1;
-(void)setFetchLimit:(unsigned long long)arg1;
-(NSDate *)earliestDate;

@end

