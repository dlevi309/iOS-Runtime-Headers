/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFImage.h>
#import <libobjc.A.dylib/SFMonogramImage.h>
@class NSString, NSDictionary, NSData;


@protocol SFMonogramImage <SFImage>
@property (nonatomic,copy) NSString * monogramLetters; 
@property (assign,nonatomic) int monogramStyle; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setMonogramLetters:(id)arg1;
-(NSData *)jsonData;
-(NSString *)monogramLetters;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFMonogramImage : SFImage <SFMonogramImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _monogramStyle;
	NSString* _monogramLetters;

}

@property (nonatomic,copy) NSString * monogramLetters;                               //@synthesize monogramLetters=_monogramLetters - In the implementation block
@property (assign,nonatomic) int monogramStyle;                                      //@synthesize monogramStyle=_monogramStyle - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int cornerRoundingStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setMonogramLetters:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)monogramLetters;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1 ;
-(BOOL)hasMonogramStyle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

