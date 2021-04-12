/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class NSString, HMHome, NSSet;

@interface HFServiceIconItemProvider : HFItemProvider {

	NSString* _serviceType;
	NSString* _serviceSubtype;
	HMHome* _home;
	NSSet* _iconItems;

}

@property (nonatomic,copy) NSSet * iconItems;                      //@synthesize iconItems=_iconItems - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                 //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * serviceSubtype;              //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (nonatomic,readonly) HMHome * home;                      //@synthesize home=_home - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serviceType;
-(HMHome *)home;
-(id)items;
-(void)setServiceType:(NSString *)arg1 ;
-(id)reloadItems;
-(NSString *)serviceSubtype;
-(void)setServiceSubtype:(NSString *)arg1 ;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 home:(id)arg3 ;
-(NSSet *)iconItems;
-(void)setIconItems:(NSSet *)arg1 ;
@end

