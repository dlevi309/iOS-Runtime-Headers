/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface UISDShareSheetSessionConfiguration : NSObject <NSSecureCoding> {

	BOOL _wantsAnimation;
	NSNumber* _nearbyCountSlotID;
	NSArray* _peopleProxies;
	NSArray* _shareProxies;
	NSArray* _actionProxies;

}

@property (nonatomic,retain) NSNumber * nearbyCountSlotID;              //@synthesize nearbyCountSlotID=_nearbyCountSlotID - In the implementation block
@property (nonatomic,retain) NSArray * peopleProxies;                   //@synthesize peopleProxies=_peopleProxies - In the implementation block
@property (nonatomic,retain) NSArray * shareProxies;                    //@synthesize shareProxies=_shareProxies - In the implementation block
@property (nonatomic,retain) NSArray * actionProxies;                   //@synthesize actionProxies=_actionProxies - In the implementation block
@property (assign,nonatomic) BOOL wantsAnimation;                       //@synthesize wantsAnimation=_wantsAnimation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wantsAnimation;
-(void)setWantsAnimation:(BOOL)arg1 ;
-(NSNumber *)nearbyCountSlotID;
-(void)setNearbyCountSlotID:(NSNumber *)arg1 ;
-(void)setShareProxies:(NSArray *)arg1 ;
-(void)setActionProxies:(NSArray *)arg1 ;
-(NSArray *)shareProxies;
-(NSArray *)actionProxies;
-(NSArray *)peopleProxies;
-(void)setPeopleProxies:(NSArray *)arg1 ;
@end

