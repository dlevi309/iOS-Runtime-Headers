/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal {

	NSString* _message;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(void)dealloc;
-(int)defaultFamiliarity;
@end

