/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(void)addChild:(id)arg1 ;
-(MMElement *)parent;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setParent:(MMElement *)arg1 ;
-(NSString *)stringValue;
-(NSString *)identifier;
-(unsigned long long)level;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSRange)range;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(id)removeLastChild;
-(void)addInnerRange:(NSRange)arg1 ;
-(void)removeLastInnerRange;
-(void)setInnerRanges:(NSArray *)arg1 ;
-(NSArray *)innerRanges;
@end

