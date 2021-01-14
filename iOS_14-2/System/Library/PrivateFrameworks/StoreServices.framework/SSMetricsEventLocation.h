/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface SSMetricsEventLocation : NSObject {

	long long _position;
	NSString* _type;
	NSMutableDictionary* _values;

}

@property (assign,nonatomic) long long locationPosition;                        //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * locationType;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * reportingDictionary; 
-(void)setLocationType:(NSString *)arg1 ;
-(NSString *)locationType;
-(NSDictionary *)reportingDictionary;
-(id)valueForLocationKey:(id)arg1 ;
-(long long)locationPosition;
-(void)setLocationPosition:(long long)arg1 ;
-(void)setValue:(id)arg1 forLocationKey:(id)arg2 ;
@end

