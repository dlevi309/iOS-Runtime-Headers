/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class VNPersonsModel, NSDate, NSMutableDictionary;

@interface AXMVisionFaceNameHelper : NSObject {

	VNPersonsModel* __personsModel;
	NSDate* __personsModelFileModifiedDate;
	NSMutableDictionary* __personLocalIdentifierToName;
	double __lastFileModificationCheckTime;

}

@property (nonatomic,retain) VNPersonsModel * _personsModel;                                  //@synthesize _personsModel=__personsModel - In the implementation block
@property (assign,nonatomic) NSDate * _personsModelFileModifiedDate;                          //@synthesize _personsModelFileModifiedDate=__personsModelFileModifiedDate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _personLocalIdentifierToName;              //@synthesize _personLocalIdentifierToName=__personLocalIdentifierToName - In the implementation block
@property (assign,nonatomic) double _lastFileModificationCheckTime;                           //@synthesize _lastFileModificationCheckTime=__lastFileModificationCheckTime - In the implementation block
-(VNPersonsModel *)_personsModel;
-(void)_resetState;
-(BOOL)prepareForLookup;
-(unsigned long long)faceprintRequestRevisionForPersonsModel;
-(id)nameForFaceObservation:(id)arg1 ;
-(void)set_personsModel:(VNPersonsModel *)arg1 ;
-(void)set_personsModelFileModifiedDate:(NSDate *)arg1 ;
-(void)set_personLocalIdentifierToName:(NSMutableDictionary *)arg1 ;
-(void)set_lastFileModificationCheckTime:(double)arg1 ;
-(id)_filePathForPersonsModel;
-(id)_fileModificationDateForPath:(id)arg1 ;
-(double)_lastFileModificationCheckTime;
-(NSDate *)_personsModelFileModifiedDate;
-(BOOL)_isDeviceUnlocked;
-(BOOL)_shouldReloadPersonsModel;
-(NSMutableDictionary *)_personLocalIdentifierToName;
-(BOOL)_checkPhotoLibraryAuthorization;
-(id)_photoAuthorizationMessage:(long long)arg1 ;
-(void)_loadPersonsModel;
-(id)_fetchPersonsForLocalIdentifiers:(id)arg1 ;
@end

