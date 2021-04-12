/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSFeederPrefetchOptions : NSObject <NSCopying> {

	unsigned long long _personCountPrefetchMode;
	unsigned long long _personsPrefetchMode;
	unsigned long long _scenesPrefetchMode;
	unsigned long long _faceInformationPrefetchMode;
	unsigned long long _locationPrefetchMode;

}

@property (assign,nonatomic) unsigned long long personCountPrefetchMode;                  //@synthesize personCountPrefetchMode=_personCountPrefetchMode - In the implementation block
@property (assign,nonatomic) unsigned long long personsPrefetchMode;                      //@synthesize personsPrefetchMode=_personsPrefetchMode - In the implementation block
@property (assign,nonatomic) unsigned long long scenesPrefetchMode;                       //@synthesize scenesPrefetchMode=_scenesPrefetchMode - In the implementation block
@property (assign,nonatomic) unsigned long long faceInformationPrefetchMode;              //@synthesize faceInformationPrefetchMode=_faceInformationPrefetchMode - In the implementation block
@property (assign,nonatomic) unsigned long long locationPrefetchMode;                     //@synthesize locationPrefetchMode=_locationPrefetchMode - In the implementation block
+(id)feederPrefetchOptionsWithDefaultMode:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)personCountPrefetchMode;
-(void)setPersonCountPrefetchMode:(unsigned long long)arg1 ;
-(unsigned long long)personsPrefetchMode;
-(void)setPersonsPrefetchMode:(unsigned long long)arg1 ;
-(unsigned long long)scenesPrefetchMode;
-(void)setScenesPrefetchMode:(unsigned long long)arg1 ;
-(unsigned long long)faceInformationPrefetchMode;
-(void)setFaceInformationPrefetchMode:(unsigned long long)arg1 ;
-(unsigned long long)locationPrefetchMode;
-(void)setLocationPrefetchMode:(unsigned long long)arg1 ;
@end

