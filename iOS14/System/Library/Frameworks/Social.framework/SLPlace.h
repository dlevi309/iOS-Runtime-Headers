/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	NSURL* _pictureURL;
	NSString* _category;
	double _latitude;
	double _longitude;
	double _distance;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (retain) NSURL * pictureURL;                                         //@synthesize pictureURL=_pictureURL - In the implementation block
@property (retain) NSString * category;                                        //@synthesize category=_category - In the implementation block
@property (assign) double latitude;                                            //@synthesize latitude=_latitude - In the implementation block
@property (assign) double longitude;                                           //@synthesize longitude=_longitude - In the implementation block
@property (assign) double distance;                                            //@synthesize distance=_distance - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(void)setDistance:(double)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)distance;
-(double)longitude;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(NSString *)category;
-(void)setLatitude:(double)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(id)encodableProperties;
-(NSURL *)pictureURL;
-(void)setPictureURL:(NSURL *)arg1 ;
@end

