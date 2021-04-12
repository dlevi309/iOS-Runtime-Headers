/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFColor.h>
@class NSDictionary, NSData;


@protocol SFColor <NSObject>
@property (assign,nonatomic) double redComponent; 
@property (assign,nonatomic) double greenComponent; 
@property (assign,nonatomic) double blueComponent; 
@property (assign,nonatomic) double alphaComponent; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(double)alphaComponent;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(NSData *)jsonData;
-(void)setRedComponent:(double)arg1;
-(void)setGreenComponent:(double)arg1;
-(void)setBlueComponent:(double)arg1;
-(void)setAlphaComponent:(double)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFColor : NSObject <SFColor, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	double _redComponent;
	double _greenComponent;
	double _blueComponent;
	double _alphaComponent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double redComponent;                                    //@synthesize redComponent=_redComponent - In the implementation block
@property (assign,nonatomic) double greenComponent;                                  //@synthesize greenComponent=_greenComponent - In the implementation block
@property (assign,nonatomic) double blueComponent;                                   //@synthesize blueComponent=_blueComponent - In the implementation block
@property (assign,nonatomic) double alphaComponent;                                  //@synthesize alphaComponent=_alphaComponent - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(double)alphaComponent;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setRedComponent:(double)arg1 ;
-(void)setGreenComponent:(double)arg1 ;
-(void)setBlueComponent:(double)arg1 ;
-(void)setAlphaComponent:(double)arg1 ;
-(BOOL)hasRedComponent;
-(BOOL)hasGreenComponent;
-(BOOL)hasBlueComponent;
-(BOOL)hasAlphaComponent;
@end

