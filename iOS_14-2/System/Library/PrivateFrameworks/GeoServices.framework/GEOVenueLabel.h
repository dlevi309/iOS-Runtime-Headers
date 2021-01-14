/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOVenueLabel.h>
@class NSString;


@protocol GEOVenueLabel
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * detail; 
@required
-(NSString *)detail;
-(NSString *)shortName;
-(NSString *)name;

@end


@class NSString;

@interface GEOVenueLabel : NSObject <GEOVenueLabel> {

	NSString* _name;
	NSString* _shortName;
	NSString* _detail;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shortName;              //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,readonly) NSString * detail;                 //@synthesize detail=_detail - In the implementation block
-(NSString *)detail;
-(id)init;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)shortName;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3 ;
@end

