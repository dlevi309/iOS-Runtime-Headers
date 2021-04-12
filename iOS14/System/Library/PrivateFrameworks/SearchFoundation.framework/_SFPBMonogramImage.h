/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMonogramImage.h>
@class NSString, NSData;


@protocol _SFPBMonogramImage <NSObject>
@property (nonatomic,copy) NSString * monogramLetters; 
@property (assign,nonatomic) int monogramStyle; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setMonogramLetters:(id)arg1;
-(NSData *)jsonData;
-(NSString *)monogramLetters;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBMonogramImage : PBCodable <_SFPBMonogramImage, NSSecureCoding> {

	int _monogramStyle;
	NSString* _monogramLetters;

}

@property (nonatomic,copy) NSString * monogramLetters;              //@synthesize monogramLetters=_monogramLetters - In the implementation block
@property (assign,nonatomic) int monogramStyle;                     //@synthesize monogramStyle=_monogramStyle - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setMonogramLetters:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)monogramLetters;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

