/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSArray;

@interface _UICollectionLayoutVisualFormatParser : NSObject {

	NSString* _visualFormat;
	unsigned long long _axis;
	NSString* _name;
	NSArray* _items;

}

@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * visualFormat;                //@synthesize visualFormat=_visualFormat - In the implementation block
@property (nonatomic,copy) NSArray * items;                        //@synthesize items=_items - In the implementation block
+(id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2 ;
+(unsigned long long)axisForVisualFormat:(id)arg1 ;
+(id)parserWithVisualFormat:(id)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(void)_parse;
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)items;
-(NSString *)name;
-(id)description;
-(NSString *)visualFormat;
-(void)setName:(NSString *)arg1 ;
-(void)setVisualFormat:(NSString *)arg1 ;
-(id)initWithVisualFormat:(id)arg1 ;
@end

