/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBPin.h>
@class _SFPBLatLng, _SFPBColor, NSString, NSData;


@protocol _SFPBPin <NSObject>
@property (nonatomic,retain) _SFPBLatLng * location; 
@property (nonatomic,retain) _SFPBColor * pinColor; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * resultID; 
@property (nonatomic,copy) NSData * mapsData; 
@property (assign,nonatomic) int pinBehavior; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBLatLng *)location;
-(void)setPinColor:(id)arg1;
-(NSData *)jsonData;
-(void)setResultID:(id)arg1;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1;
-(NSData *)mapsData;
-(void)setMapsData:(id)arg1;
-(_SFPBColor *)pinColor;
-(id)initWithDictionary:(id)arg1;
-(void)setLocation:(id)arg1;
-(NSString *)resultID;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBLatLng, _SFPBColor, NSString, NSData;

@interface _SFPBPin : PBCodable <_SFPBPin, NSSecureCoding> {

	int _pinBehavior;
	_SFPBLatLng* _location;
	_SFPBColor* _pinColor;
	NSString* _label;
	NSString* _resultID;
	NSData* _mapsData;

}

@property (nonatomic,retain) _SFPBLatLng * location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) _SFPBColor * pinColor;                 //@synthesize pinColor=_pinColor - In the implementation block
@property (nonatomic,copy) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * resultID;                     //@synthesize resultID=_resultID - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                       //@synthesize mapsData=_mapsData - In the implementation block
@property (assign,nonatomic) int pinBehavior;                       //@synthesize pinBehavior=_pinBehavior - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(_SFPBLatLng *)location;
-(void)setPinColor:(_SFPBColor *)arg1 ;
-(NSData *)jsonData;
-(void)setResultID:(NSString *)arg1 ;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1 ;
-(NSData *)mapsData;
-(void)setMapsData:(NSData *)arg1 ;
-(_SFPBColor *)pinColor;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(_SFPBLatLng *)arg1 ;
-(unsigned long long)hash;
-(NSString *)resultID;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)label;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

