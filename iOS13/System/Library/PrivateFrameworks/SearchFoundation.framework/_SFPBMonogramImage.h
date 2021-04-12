/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(NSString *)monogramLetters;
-(void)setMonogramLetters:(id)arg1;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBMonogramImage : PBCodable <_SFPBMonogramImage, NSSecureCoding> {

	int _monogramStyle;
	NSString* _monogramLetters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * monogramLetters;              //@synthesize monogramLetters=_monogramLetters - In the implementation block
@property (assign,nonatomic) int monogramStyle;                     //@synthesize monogramStyle=_monogramStyle - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)monogramLetters;
-(void)setMonogramLetters:(NSString *)arg1 ;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

