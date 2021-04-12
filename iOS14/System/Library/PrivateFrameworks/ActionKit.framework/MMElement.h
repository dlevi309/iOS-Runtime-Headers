/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSMutableArray, NSString, NSArray;

@interface MMElement : NSObject {

	NSMutableArray* _innerRanges;
	NSMutableArray* _children;
	int _type;
	long long _alignment;
	unsigned long long _level;
	NSString* _href;
	NSString* _title;
	NSString* _identifier;
	NSString* _stringValue;
	MMElement* _parent;
	NSString* _language;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * innerRanges;                    //@synthesize innerRanges=_innerRanges - In the implementation block
@property (assign,nonatomic) long long alignment;                    //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) unsigned long long level;               //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSString * href;                          //@synthesize href=_href - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic,__weak) MMElement * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy) NSArray * children;                       //@synthesize children=_children - In the implementation block
@property (nonatomic,copy) NSString * language;                      //@synthesize language=_language - In the implementation block
-(NSArray *)children;
-(NSString *)href;
-(void)setRange:(NSRange)arg1 ;
-(MMElement *)parent;
-(id)init;
-(NSRange)range;
-(void)addChild:(id)arg1 ;
-(long long)alignment;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setHref:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)stringValue;
-(void)setParent:(MMElement *)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)level;
-(int)type;
-(void)removeChild:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(NSString *)language;
-(NSString *)title;
-(void)dealloc;
-(void)addInnerRange:(NSRange)arg1 ;
-(void)removeLastInnerRange;
-(id)removeLastChild;
-(void)setInnerRanges:(NSArray *)arg1 ;
-(NSArray *)innerRanges;
@end

