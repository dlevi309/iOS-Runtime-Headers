/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFPin.h>
@class SFLatLng, SFColor, NSString, NSData, NSDictionary;


@protocol SFPin <NSObject>
@property (nonatomic,retain) SFLatLng * location; 
@property (nonatomic,retain) SFColor * pinColor; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * resultID; 
@property (nonatomic,copy) NSData * mapsData; 
@property (assign,nonatomic) int pinBehavior; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(SFLatLng *)location;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(void)setLocation:(id)arg1;
-(SFColor *)pinColor;
-(void)setPinColor:(id)arg1;
-(NSData *)mapsData;
-(void)setMapsData:(id)arg1;
-(NSData *)jsonData;
-(NSString *)resultID;
-(void)setResultID:(id)arg1;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFLatLng, SFColor, NSString, NSData, NSDictionary;

@interface SFPin : NSObject <SFPin, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _pinBehavior;
	SFLatLng* _location;
	SFColor* _pinColor;
	NSString* _label;
	NSString* _resultID;
	NSData* _mapsData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SFLatLng * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) SFColor * pinColor;                                     //@synthesize pinColor=_pinColor - In the implementation block
@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * resultID;                                      //@synthesize resultID=_resultID - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                                        //@synthesize mapsData=_mapsData - In the implementation block
@property (assign,nonatomic) int pinBehavior;                                        //@synthesize pinBehavior=_pinBehavior - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(SFLatLng *)location;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLocation:(SFLatLng *)arg1 ;
-(SFColor *)pinColor;
-(void)setPinColor:(SFColor *)arg1 ;
-(NSData *)mapsData;
-(void)setMapsData:(NSData *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)resultID;
-(void)setResultID:(NSString *)arg1 ;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1 ;
-(BOOL)hasPinBehavior;
@end

