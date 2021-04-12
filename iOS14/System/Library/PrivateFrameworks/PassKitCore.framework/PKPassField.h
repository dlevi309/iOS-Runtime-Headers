/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PKPassField : NSObject <NSSecureCoding, NSCopying> {

	NSString* _value;
	long long _type;
	NSString* _key;
	NSString* _label;
	id _unformattedValue;
	NSString* _changeMessage;
	long long _textAlignment;
	long long _cellStyle;
	long long _unitType;
	unsigned long long _row;
	unsigned long long _dataDetectorTypes;
	NSDictionary* _semantics;
	long long _foreignReferenceType;
	NSString* _foreignReferenceIdentifier;

}

@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * label;                                     //@synthesize label=_label - In the implementation block
@property (__weak,readonly) NSString * value; 
@property (assign,nonatomic) unsigned long long row;                             //@synthesize row=_row - In the implementation block
@property (nonatomic,copy) id unformattedValue;                                  //@synthesize unformattedValue=_unformattedValue - In the implementation block
@property (nonatomic,copy) NSString * changeMessage;                             //@synthesize changeMessage=_changeMessage - In the implementation block
@property (assign,nonatomic) long long textAlignment;                            //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long dataDetectorTypes;               //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * semantics;                             //@synthesize semantics=_semantics - In the implementation block
@property (assign,nonatomic) long long cellStyle;                                //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic) long long foreignReferenceType;                     //@synthesize foreignReferenceType=_foreignReferenceType - In the implementation block
@property (nonatomic,retain) NSString * foreignReferenceIdentifier;              //@synthesize foreignReferenceIdentifier=_foreignReferenceIdentifier - In the implementation block
@property (assign,nonatomic) long long unitType;                                 //@synthesize unitType=_unitType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCellStyle:(long long)arg1 ;
-(id)asDictionary;
-(id)init;
-(unsigned long long)row;
-(void)setUnitType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)changeMessage;
-(void)flushCachedValue;
-(void)setSemantics:(NSDictionary *)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setChangeMessage:(NSString *)arg1 ;
-(void)setForeignReferenceType:(long long)arg1 ;
-(void)setForeignReferenceIdentifier:(NSString *)arg1 ;
-(long long)foreignReferenceType;
-(void)setUnformattedValue:(id)arg1 ;
-(NSString *)foreignReferenceIdentifier;
-(void)setRow:(unsigned long long)arg1 ;
-(long long)textAlignment;
-(id)description;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(long long)unitType;
-(NSString *)key;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)semantics;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(long long)cellStyle;
-(unsigned long long)dataDetectorTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)value;
-(id)unformattedValue;
@end

