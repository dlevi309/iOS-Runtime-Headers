/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal {

	NSString* _reason;
	NSString* _reason2;
	unsigned _rid;
	int _source;

}

@property (nonatomic,retain) NSString * reason;               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * reason2;              //@synthesize reason2=_reason2 - In the implementation block
@property (assign,nonatomic) unsigned rid;                    //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) int source;                      //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(void)setSource:(int)arg1 ;
-(NSString *)reason;
-(int)source;
-(void)setReason:(NSString *)arg1 ;
-(unsigned)rid;
-(void)setRid:(unsigned)arg1 ;
-(int)defaultFamiliarity;
-(NSString *)reason2;
-(void)setReason2:(NSString *)arg1 ;
@end

