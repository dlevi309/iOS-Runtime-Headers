/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)jsonData;
-(NSString *)monogramLetters;
-(void)setMonogramLetters:(id)arg1;
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,copy) NSString * monogramLetters;                               //@synthesize monogramLetters=_monogramLetters - In the implementation block
@property (assign,nonatomic) int monogramStyle;                                      //@synthesize monogramStyle=_monogramStyle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)monogramLetters;
-(void)setMonogramLetters:(NSString *)arg1 ;
-(int)monogramStyle;
-(void)setMonogramStyle:(int)arg1 ;
-(BOOL)hasMonogramStyle;
@end

