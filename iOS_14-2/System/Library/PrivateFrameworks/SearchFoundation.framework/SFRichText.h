/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFText.h>
#import <libobjc.A.dylib/SFRichText.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFRichText <SFText>
@property (assign,nonatomic) double starRating; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSArray * formattedTextPieces; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)icons;
-(void)setContentAdvisory:(id)arg1;
-(void)setIcons:(id)arg1;
-(double)starRating;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(NSArray *)formattedTextPieces;
-(void)setFormattedTextPieces:(id)arg1;
-(void)setStarRating:(double)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFRichText : SFText <SFRichText, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	double _starRating;
	NSString* _contentAdvisory;
	NSArray* _icons;
	NSArray* _formattedTextPieces;

}

@property (assign,nonatomic) double starRating;                                      //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                               //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,copy) NSArray * icons;                                          //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSArray * formattedTextPieces;                            //@synthesize formattedTextPieces=_formattedTextPieces - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned long long maxLines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)icons;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(double)starRating;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(NSArray *)formattedTextPieces;
-(BOOL)hasStarRating;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFormattedTextPieces:(NSArray *)arg1 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setStarRating:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

