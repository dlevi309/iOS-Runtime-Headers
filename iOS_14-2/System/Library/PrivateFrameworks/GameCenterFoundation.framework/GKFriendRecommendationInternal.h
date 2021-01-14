/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)rid;
-(void)setSource:(int)arg1 ;
-(void)setRid:(unsigned)arg1 ;
-(NSString *)reason;
-(NSString *)reason2;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
-(int)source;
-(int)defaultFamiliarity;
-(void)setReason2:(NSString *)arg1 ;
@end

