/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(_SFPBGraphicalFloat *)width;
-(_SFPBGraphicalFloat *)height;
-(void)setWidth:(id)arg1;
-(void)setHeight:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBGraphicalFloat, NSData, NSString;

@interface _SFPBPointSize : PBCodable <_SFPBPointSize, NSSecureCoding> {

	_SFPBGraphicalFloat* _width;
	_SFPBGraphicalFloat* _height;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBGraphicalFloat * width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(_SFPBGraphicalFloat *)width;
-(_SFPBGraphicalFloat *)height;
-(void)setWidth:(_SFPBGraphicalFloat *)arg1 ;
-(void)setHeight:(_SFPBGraphicalFloat *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithCGSize:(CGSize)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

