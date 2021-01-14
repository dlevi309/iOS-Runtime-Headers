/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFText.h>
@class NSString, NSDictionary, NSData;


@protocol SFText <NSObject>
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned long long maxLines; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setMaxLines:(unsigned long long)arg1;
-(NSData *)jsonData;
-(void)setText:(id)arg1;
-(NSString *)text;
-(unsigned long long)maxLines;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFText : NSObject <SFText, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	NSString* _text;
	unsigned long long _maxLines;

}

@property (copy) NSString * text;                                                    //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long maxLines;                            //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)textWithString:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setMaxLines:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasMaxLines;
-(void)setText:(NSString *)arg1 ;
-(unsigned long long)length;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(unsigned long long)maxLines;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

