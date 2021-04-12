/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)locationType;
-(void)setLocationType:(NSString *)arg1 ;
-(void)setLocationPosition:(long long)arg1 ;
-(void)setValue:(id)arg1 forLocationKey:(id)arg2 ;
-(NSDictionary *)reportingDictionary;
-(id)valueForLocationKey:(id)arg1 ;
-(long long)locationPosition;
@end

