/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class NSString, NSDictionary;

@interface TSBonjourNode : NSObject {

	NSString* _name;
	NSString* _type;
	NSString* _domain;
	NSDictionary* _interfaces;

}

@property (nonatomic,copy) NSDictionary * interfaces;               //@synthesize interfaces=_interfaces - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
-(id)init;
-(NSDictionary *)interfaces;
-(NSString *)domain;
-(NSString *)name;
-(NSString *)type;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3 ;
-(void)addedOnInterface:(unsigned)arg1 named:(id)arg2 ;
-(void)removedFromInterface:(unsigned)arg1 named:(id)arg2 ;
-(void)setInterfaces:(NSDictionary *)arg1 ;
@end

