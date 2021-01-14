/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASLocation : ASItem <NSSecureCoding> {

	NSString* _displayName;
	NSString* _annotation;
	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _latitude;
	NSString* _longitude;
	NSString* _accuracy;
	NSString* _altitude;
	NSString* _altitudeAccuracy;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * annotation;                    //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) NSString * street;                        //@synthesize street=_street - In the implementation block
@property (nonatomic,retain) NSString * city;                          //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSString * state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * postalCode;                    //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,retain) NSString * country;                       //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * longitude;                     //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSString * accuracy;                      //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSString * altitude;                      //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,retain) NSString * altitudeAccuracy;              //@synthesize altitudeAccuracy=_altitudeAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)locationWithCalLocation:(void*)arg1 ;
-(NSString *)annotation;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(NSString *)latitude;
-(id)initWithTitle:(id)arg1 ;
-(NSString *)postalCode;
-(NSString *)city;
-(void)setAltitude:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)street;
-(NSString *)country;
-(void)setStreet:(NSString *)arg1 ;
-(NSString *)altitude;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setAnnotation:(NSString *)arg1 ;
-(NSString *)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)setAccuracy:(NSString *)arg1 ;
-(void)setLongitude:(NSString *)arg1 ;
-(void)setLatitude:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)accuracy;
-(void)setState:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)displayName;
-(BOOL)isEmptyLocation;
-(id)initWithApplicationData:(id)arg1 ;
-(NSString *)altitudeAccuracy;
-(id)initWithCalLocation:(void*)arg1 ;
-(void)setAltitudeAccuracy:(NSString *)arg1 ;
@end

