/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString;

@interface FATField : NSObject {

	BOOL _optional;
	unsigned _index;
	unsigned _type;
	NSString* _name;
	Class _structClass;
	FATField* _valueField;
	FATField* _keyField;

}

@property (assign) unsigned index;                               //@synthesize index=_index - In the implementation block
@property (assign) unsigned type;                                //@synthesize type=_type - In the implementation block
@property (assign) BOOL optional;                                //@synthesize optional=_optional - In the implementation block
@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) Class structClass;                  //@synthesize structClass=_structClass - In the implementation block
@property (nonatomic,retain) FATField * valueField;              //@synthesize valueField=_valueField - In the implementation block
@property (nonatomic,retain) FATField * keyField;                //@synthesize keyField=_keyField - In the implementation block
+(id)fieldWithIndex:(unsigned)arg1 type:(unsigned)arg2 optional:(BOOL)arg3 name:(id)arg4 ;
+(id)fieldWithIndex:(unsigned)arg1 type:(unsigned)arg2 optional:(BOOL)arg3 name:(id)arg4 structClass:(Class)arg5 ;
+(id)fieldWithIndex:(unsigned)arg1 type:(unsigned)arg2 optional:(BOOL)arg3 name:(id)arg4 valueField:(id)arg5 ;
+(id)fieldWithIndex:(unsigned)arg1 type:(unsigned)arg2 optional:(BOOL)arg3 name:(id)arg4 keyField:(id)arg5 valueField:(id)arg6 ;
+(id)nameForFatFieldType:(unsigned)arg1 ;
-(unsigned)index;
-(void)setOptional:(BOOL)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned)type;
-(void)setName:(NSString *)arg1 ;
-(BOOL)optional;
-(void)setKeyField:(FATField *)arg1 ;
-(void)setValueField:(FATField *)arg1 ;
-(void)setStructClass:(Class)arg1 ;
-(Class)structClass;
-(FATField *)valueField;
-(FATField *)keyField;
@end

