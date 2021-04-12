/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleID;
-(long long)platform;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setPlatform:(long long)arg1 ;
-(NSSet *)versions;
-(NSNumber *)adamID;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSSet *)shortVersions;
-(void)setVersions:(NSSet *)arg1 ;
-(void)setShortVersions:(NSSet *)arg1 ;
@end

