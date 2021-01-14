/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSSet, PHPhotoLibrary;

@interface CLSFocusPeopleCache : NSObject {

	NSSet* _peopleUUIDs;
	unsigned long long _maximumNumberOfPeople;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,nonatomic,__weak) PHPhotoLibrary * photoLibrary;                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfPeople;              //@synthesize maximumNumberOfPeople=_maximumNumberOfPeople - In the implementation block
@property (nonatomic,readonly) NSSet * peopleUUIDs;                                 //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
+(id)_personSortDescriptors;
-(PHPhotoLibrary *)photoLibrary;
-(NSSet *)peopleUUIDs;
-(id)_collectValidPeopleUUIDs;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(unsigned long long)maximumNumberOfPeople;
-(void)setMaximumNumberOfPeople:(unsigned long long)arg1 ;
-(void)invalidate;
-(id)initWithPhotoLibrary:(id)arg1 maximumNumberOfPeople:(unsigned long long)arg2 ;
@end

