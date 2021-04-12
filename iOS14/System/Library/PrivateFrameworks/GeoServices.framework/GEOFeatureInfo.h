/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSArray;

@interface GEOFeatureInfo : NSObject {

	NSString* _name;
	NSArray* _environments;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * environments;              //@synthesize environments=_environments - In the implementation block
@property (assign,nonatomic) long long state; 
-(NSString *)name;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSArray *)environments;
-(id)initWithName:(id)arg1 environments:(id)arg2 ;
@end

