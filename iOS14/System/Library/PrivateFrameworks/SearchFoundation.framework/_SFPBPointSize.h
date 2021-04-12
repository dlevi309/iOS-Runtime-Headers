/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBPointSize.h>
@class _SFPBGraphicalFloat, NSData;


@protocol _SFPBPointSize <NSObject>
@property (nonatomic,retain) _SFPBGraphicalFloat * width; 
@property (nonatomic,retain) _SFPBGraphicalFloat * height; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setHeight:(id)arg1;
-(_SFPBGraphicalFloat *)width;
-(NSData *)jsonData;
-(void)setWidth:(id)arg1;
-(_SFPBGraphicalFloat *)height;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBGraphicalFloat, NSData, NSString;

@interface _SFPBPointSize : PBCodable <_SFPBPointSize, NSSecureCoding> {

	_SFPBGraphicalFloat* _width;
	_SFPBGraphicalFloat* _height;

}

@property (nonatomic,retain) _SFPBGraphicalFloat * width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeight:(_SFPBGraphicalFloat *)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBGraphicalFloat *)width;
-(NSData *)jsonData;
-(void)setWidth:(_SFPBGraphicalFloat *)arg1 ;
-(id)initWithCGSize:(CGSize)arg1 ;
-(_SFPBGraphicalFloat *)height;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

