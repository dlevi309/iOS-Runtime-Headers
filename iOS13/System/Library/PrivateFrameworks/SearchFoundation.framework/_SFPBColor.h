/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(_SFPBGraphicalFloat *)alphaComponent;
-(_SFPBGraphicalFloat *)redComponent;
-(_SFPBGraphicalFloat *)greenComponent;
-(_SFPBGraphicalFloat *)blueComponent;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setRedComponent:(id)arg1;
-(void)setGreenComponent:(id)arg1;
-(void)setBlueComponent:(id)arg1;
-(void)setAlphaComponent:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBGraphicalFloat, NSData, NSString;

@interface _SFPBColor : PBCodable <_SFPBColor, NSSecureCoding> {

	_SFPBGraphicalFloat* _redComponent;
	_SFPBGraphicalFloat* _greenComponent;
	_SFPBGraphicalFloat* _blueComponent;
	_SFPBGraphicalFloat* _alphaComponent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBGraphicalFloat * redComponent;                //@synthesize redComponent=_redComponent - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * greenComponent;              //@synthesize greenComponent=_greenComponent - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * blueComponent;               //@synthesize blueComponent=_blueComponent - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * alphaComponent;              //@synthesize alphaComponent=_alphaComponent - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBGraphicalFloat *)alphaComponent;
-(_SFPBGraphicalFloat *)redComponent;
-(_SFPBGraphicalFloat *)greenComponent;
-(_SFPBGraphicalFloat *)blueComponent;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setRedComponent:(_SFPBGraphicalFloat *)arg1 ;
-(void)setGreenComponent:(_SFPBGraphicalFloat *)arg1 ;
-(void)setBlueComponent:(_SFPBGraphicalFloat *)arg1 ;
-(void)setAlphaComponent:(_SFPBGraphicalFloat *)arg1 ;
@end

