/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)personsPrefetchMode;
-(id)init;
-(void)setLocationPrefetchMode:(unsigned long long)arg1 ;
-(unsigned long long)scenesPrefetchMode;
-(void)setPersonsPrefetchMode:(unsigned long long)arg1 ;
-(unsigned long long)locationPrefetchMode;
-(unsigned long long)faceInformationPrefetchMode;
-(unsigned long long)personCountPrefetchMode;
-(void)setFaceInformationPrefetchMode:(unsigned long long)arg1 ;
-(void)setPersonCountPrefetchMode:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScenesPrefetchMode:(unsigned long long)arg1 ;
@end

