/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(_SFPBLatLng *)location;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(void)setLocation:(id)arg1;
-(_SFPBColor *)pinColor;
-(void)setPinColor:(id)arg1;
-(NSData *)mapsData;
-(void)setMapsData:(id)arg1;
-(NSData *)jsonData;
-(NSString *)resultID;
-(void)setResultID:(id)arg1;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1;
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBLatLng * location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) _SFPBColor * pinColor;                 //@synthesize pinColor=_pinColor - In the implementation block
@property (nonatomic,copy) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * resultID;                     //@synthesize resultID=_resultID - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                       //@synthesize mapsData=_mapsData - In the implementation block
@property (assign,nonatomic) int pinBehavior;                       //@synthesize pinBehavior=_pinBehavior - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBLatLng *)location;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLocation:(_SFPBLatLng *)arg1 ;
-(_SFPBColor *)pinColor;
-(void)setPinColor:(_SFPBColor *)arg1 ;
-(NSData *)mapsData;
-(void)setMapsData:(NSData *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)resultID;
-(void)setResultID:(NSString *)arg1 ;
-(int)pinBehavior;
-(void)setPinBehavior:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

