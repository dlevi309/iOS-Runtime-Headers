/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSInputClue.h>

@class CLSPerson, PHPhotoLibrary;

@interface CLSInputPeopleClue : CLSInputClue {

	CLSPerson* _person;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _numberOfFaces;

}

@property (nonatomic,retain) CLSPerson * person;                                //@synthesize person=_person - In the implementation block
@property (assign,nonatomic,__weak) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFaces;                  //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
+(id)clueWithPeople:(id)arg1 ;
+(id)cluesWithPeoples:(id)arg1 ;
+(id)clueWithPeopleUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)cluesWithPeopleUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)description;
-(id)name;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(CLSPerson *)person;
-(void)setPerson:(CLSPerson *)arg1 ;
-(unsigned long long)numberOfFaces;
-(void)setNumberOfFaces:(unsigned long long)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
@end

