/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBColor.h>
@class _SFPBGraphicalFloat, NSData;


@protocol _SFPBColor <NSObject>
@property (nonatomic,retain) _SFPBGraphicalFloat * redComponent; 
@property (nonatomic,retain) _SFPBGraphicalFloat * greenComponent; 
@property (nonatomic,retain) _SFPBGraphicalFloat * blueComponent; 
@property (nonatomic,retain) _SFPBGraphicalFloat * alphaComponent; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBGraphicalFloat *)alphaComponent;
-(void)setRedComponent:(id)arg1;
-(void)setGreenComponent:(id)arg1;
-(void)setBlueComponent:(id)arg1;
-(void)setAlphaComponent:(id)arg1;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(_SFPBGraphicalFloat *)greenComponent;
-(_SFPBGraphicalFloat *)redComponent;
-(id)initWithJSON:(id)arg1;
-(_SFPBGraphicalFloat *)blueComponent;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBGraphicalFloat, NSData, NSString;

@interface _SFPBColor : PBCodable <_SFPBColor, NSSecureCoding> {

	_SFPBGraphicalFloat* _redComponent;
	_SFPBGraphicalFloat* _greenComponent;
	_SFPBGraphicalFloat* _blueComponent;
	_SFPBGraphicalFloat* _alphaComponent;

}

@property (nonatomic,retain) _SFPBGraphicalFloat * redComponent;                //@synthesize redComponent=_redComponent - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * greenComponent;              //@synthesize greenComponent=_greenComponent - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * blueComponent;               //@synthesize blueComponent=_blueComponent - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * alphaComponent;              //@synthesize alphaComponent=_alphaComponent - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(_SFPBGraphicalFloat *)alphaComponent;
-(id)initWithFacade:(id)arg1 ;
-(void)setRedComponent:(_SFPBGraphicalFloat *)arg1 ;
-(void)setGreenComponent:(_SFPBGraphicalFloat *)arg1 ;
-(void)setBlueComponent:(_SFPBGraphicalFloat *)arg1 ;
-(void)setAlphaComponent:(_SFPBGraphicalFloat *)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBGraphicalFloat *)greenComponent;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBGraphicalFloat *)redComponent;
-(id)initWithJSON:(id)arg1 ;
-(_SFPBGraphicalFloat *)blueComponent;
-(BOOL)isEqual:(id)arg1 ;
@end

