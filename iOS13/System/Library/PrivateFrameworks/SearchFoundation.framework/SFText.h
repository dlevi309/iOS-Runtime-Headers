/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)text;
-(void)setText:(id)arg1;
-(NSData *)jsonData;
-(unsigned long long)maxLines;
-(void)setMaxLines:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFText : NSObject <SFText, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	NSString* _text;
	unsigned long long _maxLines;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * text;                                                    //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long maxLines;                            //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
+(id)textWithString:(id)arg1 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(unsigned long long)maxLines;
-(void)setMaxLines:(unsigned long long)arg1 ;
-(BOOL)hasMaxLines;
@end

