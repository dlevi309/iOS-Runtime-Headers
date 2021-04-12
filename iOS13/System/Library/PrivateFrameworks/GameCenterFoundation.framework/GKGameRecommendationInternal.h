/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKGameInternal.h>

@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal {

	NSString* _reason;
	NSString* _engineID;

}

@property (nonatomic,retain) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * engineID;              //@synthesize engineID=_engineID - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithGame:(id)arg1 ;
-(id)serverRepresentation;
-(NSString *)engineID;
-(void)setEngineID:(NSString *)arg1 ;
@end

