/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithGame:(id)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)engineID;
-(void)dealloc;
-(id)serverRepresentation;
-(void)setEngineID:(NSString *)arg1 ;
@end

