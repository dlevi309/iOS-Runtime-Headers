/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSInputClue.h>

@class CLSPersonIdentity, PHPhotoLibrary;

@interface CLSInputPeopleClue : CLSInputClue {

	CLSPersonIdentity* _person;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _numberOfFaces;

}

@property (nonatomic,retain) CLSPersonIdentity * person;                        //@synthesize person=_person - In the implementation block
@property (assign,nonatomic,__weak) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFaces;                  //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
+(id)clueWithPeopleUUID:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)cluesWithPeoples:(id)arg1 ;
+(id)clueWithPeople:(id)arg1 ;
+(id)cluesWithPeopleUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(CLSPersonIdentity *)person;
-(unsigned long long)numberOfFaces;
-(void)setNumberOfFaces:(unsigned long long)arg1 ;
-(BOOL)isEqualToClue:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)name;
-(id)description;
-(void)setPerson:(CLSPersonIdentity *)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
@end

