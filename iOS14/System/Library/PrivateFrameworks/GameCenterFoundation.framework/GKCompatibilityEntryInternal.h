/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber, NSSet;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation {

	NSString* _bundleID;
	NSNumber* _adamID;
	long long _platform;
	NSSet* _versions;
	NSSet* _shortVersions;

}

@property (nonatomic,retain) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * adamID;                  //@synthesize adamID=_adamID - In the implementation block
@property (assign,nonatomic) long long platform;                 //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSSet * versions;                   //@synthesize versions=_versions - In the implementation block
@property (nonatomic,retain) NSSet * shortVersions;              //@synthesize shortVersions=_shortVersions - In the implementation block
+(id)secureCodedPropertyKeys;
-(long long)platform;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setPlatform:(long long)arg1 ;
-(NSSet *)versions;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSSet *)shortVersions;
-(void)setVersions:(NSSet *)arg1 ;
-(void)setShortVersions:(NSSet *)arg1 ;
@end

