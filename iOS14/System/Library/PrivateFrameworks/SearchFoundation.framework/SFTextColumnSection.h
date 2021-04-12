/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTextColumnSection.h>
@class NSArray, NSDictionary, NSData;


@protocol SFTextColumnSection <NSObject>
@property (nonatomic,copy) NSArray * textLines; 
@property (assign,nonatomic) BOOL textNoWrap; 
@property (assign,nonatomic) unsigned long long textWeight; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setTextLines:(id)arg1;
-(void)setTextNoWrap:(BOOL)arg1;
-(void)setTextWeight:(unsigned long long)arg1;
-(NSData *)jsonData;
-(NSArray *)textLines;
-(BOOL)textNoWrap;
-(unsigned long long)textWeight;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFTextColumnSection : NSObject <SFTextColumnSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF9 _has;
	BOOL _textNoWrap;
	NSArray* _textLines;
	unsigned long long _textWeight;

}

@property (nonatomic,copy) NSArray * textLines;                                      //@synthesize textLines=_textLines - In the implementation block
@property (assign,nonatomic) BOOL textNoWrap;                                        //@synthesize textNoWrap=_textNoWrap - In the implementation block
@property (assign,nonatomic) unsigned long long textWeight;                          //@synthesize textWeight=_textWeight - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setTextLines:(NSArray *)arg1 ;
-(void)setTextNoWrap:(BOOL)arg1 ;
-(void)setTextWeight:(unsigned long long)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)textLines;
-(BOOL)textNoWrap;
-(unsigned long long)textWeight;
-(BOOL)hasTextNoWrap;
-(BOOL)hasTextWeight;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

