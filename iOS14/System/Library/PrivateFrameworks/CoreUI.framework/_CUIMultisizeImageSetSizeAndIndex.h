/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CUIMultisizeImageSetSizeAndIndex : NSObject {

	CGSize _size;
	unsigned _index;
	long long _idiom;
	unsigned long long _subtype;

}

@property (assign,nonatomic) CGSize size;                             //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned index;                          //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) long long idiom;                         //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic) unsigned long long subtype;              //@synthesize subtype=_subtype - In the implementation block
-(unsigned long long)subtype;
-(unsigned)index;
-(CGSize)size;
-(void)setIndex:(unsigned)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(long long)idiom;
-(id)description;
-(void)setIdiom:(long long)arg1 ;
-(void)setSubtype:(unsigned long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 index:(unsigned)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4 ;
@end

