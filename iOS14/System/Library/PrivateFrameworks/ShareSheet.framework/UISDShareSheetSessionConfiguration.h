/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)wantsAnimation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPeopleProxies:(NSArray *)arg1 ;
-(void)setWantsAnimation:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)nearbyCountSlotID;
-(void)setNearbyCountSlotID:(NSNumber *)arg1 ;
-(void)setShareProxies:(NSArray *)arg1 ;
-(void)setActionProxies:(NSArray *)arg1 ;
-(NSArray *)shareProxies;
-(NSArray *)actionProxies;
-(NSArray *)peopleProxies;
@end

