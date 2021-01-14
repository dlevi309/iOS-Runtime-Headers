/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber, NSSet;

@interface GKGameSummaryInternal : GKInternalRepresentation {

	BOOL _isArcade;
	NSString* _bundleID;
	NSNumber* _adamID;
	NSSet* _compatiblePlatforms;

}

@property (nonatomic,retain) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * adamID;                        //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSSet * compatiblePlatforms;              //@synthesize compatiblePlatforms=_compatiblePlatforms - In the implementation block
@property (assign,nonatomic) BOOL isArcade;                            //@synthesize isArcade=_isArcade - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setBundleID:(NSString *)arg1 ;
-(NSSet *)compatiblePlatforms;
-(id)description;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(NSString *)bundleID;
-(BOOL)isArcade;
-(void)setIsArcade:(BOOL)arg1 ;
-(void)setCompatiblePlatforms:(NSSet *)arg1 ;
-(id)initWithGameSummary:(id)arg1 ;
@end

