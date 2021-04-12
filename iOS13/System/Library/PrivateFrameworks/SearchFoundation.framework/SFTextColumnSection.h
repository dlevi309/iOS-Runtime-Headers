/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)jsonData;
-(NSArray *)textLines;
-(void)setTextLines:(id)arg1;
-(BOOL)textNoWrap;
-(void)setTextNoWrap:(BOOL)arg1;
-(unsigned long long)textWeight;
-(void)setTextWeight:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFTextColumnSection : NSObject <SFTextColumnSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF10 _has;
	BOOL _textNoWrap;
	NSArray* _textLines;
	unsigned long long _textWeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * textLines;                                      //@synthesize textLines=_textLines - In the implementation block
@property (assign,nonatomic) BOOL textNoWrap;                                        //@synthesize textNoWrap=_textNoWrap - In the implementation block
@property (assign,nonatomic) unsigned long long textWeight;                          //@synthesize textWeight=_textWeight - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSArray *)textLines;
-(void)setTextLines:(NSArray *)arg1 ;
-(BOOL)textNoWrap;
-(void)setTextNoWrap:(BOOL)arg1 ;
-(unsigned long long)textWeight;
-(void)setTextWeight:(unsigned long long)arg1 ;
-(BOOL)hasTextNoWrap;
-(BOOL)hasTextWeight;
@end

