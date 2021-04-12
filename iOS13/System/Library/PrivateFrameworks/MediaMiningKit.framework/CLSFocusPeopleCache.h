/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 maximumNumberOfPeople:(unsigned long long)arg2 ;
-(id)_collectValidPeopleUUIDs;
-(NSSet *)peopleUUIDs;
-(unsigned long long)maximumNumberOfPeople;
-(void)setMaximumNumberOfPeople:(unsigned long long)arg1 ;
@end

