/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)set_personsModel:(VNPersonsModel *)arg1 ;
-(void)set_personsModelFileModifiedDate:(NSDate *)arg1 ;
-(void)set_personLocalIdentifierToName:(NSMutableDictionary *)arg1 ;
-(void)set_lastFileModificationCheckTime:(double)arg1 ;
-(id)_filePathForPersonsModel;
-(id)_fileModificationDateForPath:(id)arg1 ;
-(double)_lastFileModificationCheckTime;
-(NSDate *)_personsModelFileModifiedDate;
-(BOOL)_shouldReloadPersonsModel;
-(NSMutableDictionary *)_personLocalIdentifierToName;
-(BOOL)_checkPhotoLibraryAuthorization;
-(id)_photoAuthorizationMessage:(long long)arg1 ;
-(id)_fetchPersonsForLocalIdentifiers:(id)arg1 ;
-(BOOL)prepareForLookup;
-(unsigned long long)faceprintRequestRevisionForPersonsModel;
-(id)nameForFaceObservation:(id)arg1 ;
-(void)_loadPersonsModel;
-(void)_resetState;
-(BOOL)_isDeviceUnlocked;
-(VNPersonsModel *)_personsModel;
@end

