/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UIStatusBarItem : NSObject {

	long long _idiom;
	int _type;

}

@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) Class viewClass; 
@property (nonatomic,readonly) int priority; 
@property (nonatomic,readonly) int leftOrder; 
@property (nonatomic,readonly) int rightOrder; 
@property (nonatomic,readonly) NSString * indicatorName; 
+(BOOL)isItemWithTypeExclusive:(int)arg1 outBlacklistItems:(id*)arg2 outWhitelistItems:(id*)arg3 ;
+(BOOL)itemType:(int)arg1 idiom:(long long)arg2 appearsInRegion:(int)arg3 ;
+(BOOL)itemType:(int)arg1 idiom:(long long)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4 ;
+(id)itemWithType:(int)arg1 idiom:(long long)arg2 ;
+(BOOL)typeIsValid:(int)arg1 ;
-(id)initWithType:(int)arg1 ;
-(long long)comparePriority:(id)arg1 ;
-(Class)viewClass;
-(id)description;
-(int)leftOrder;
-(int)type;
-(BOOL)appearsOnRight;
-(BOOL)appearsInRegion:(int)arg1 ;
-(BOOL)appearsOnLeft;
-(int)rightOrder;
-(BOOL)appearsOnCenter;
-(long long)compareLeftOrder:(id)arg1 ;
-(long long)compareRightOrder:(id)arg1 ;
-(long long)compareCenterOrder:(id)arg1 ;
-(int)centerOrder;
-(int)priority;
-(NSString *)indicatorName;
@end

