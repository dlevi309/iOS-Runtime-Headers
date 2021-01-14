/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFAbstractCommand.h>
@class SFCommandValue, NSDictionary, NSData;


@protocol SFAbstractCommand <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) SFCommandValue * value; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setType:(int)arg1;
-(void)setValue:(id)arg1;
-(int)type;
-(SFCommandValue *)value;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFCommandValue, NSDictionary, NSData, NSString;

@interface SFAbstractCommand : NSObject <SFAbstractCommand, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _type;
	SFCommandValue* _value;

}

@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SFCommandValue * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasType;
-(void)setType:(int)arg1 ;
-(void)setValue:(SFCommandValue *)arg1 ;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFCommandValue *)value;
@end

