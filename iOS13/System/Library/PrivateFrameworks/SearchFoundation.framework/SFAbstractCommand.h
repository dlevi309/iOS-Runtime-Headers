/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)type;
-(void)setType:(int)arg1;
-(SFCommandValue *)value;
-(void)setValue:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFCommandValue, NSDictionary, NSData, NSString;

@interface SFAbstractCommand : NSObject <SFAbstractCommand, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _type;
	SFCommandValue* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SFCommandValue * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFCommandValue *)value;
-(void)setValue:(SFCommandValue *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)hasType;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
@end

