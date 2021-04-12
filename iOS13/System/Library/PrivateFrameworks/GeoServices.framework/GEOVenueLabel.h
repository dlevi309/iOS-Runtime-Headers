/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOVenueLabel.h>
@class NSString;


@protocol GEOVenueLabel
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * detail; 
@required
-(NSString *)name;
-(NSString *)detail;
-(NSString *)shortName;

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
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)detail;
-(id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3 ;
-(NSString *)shortName;
@end

