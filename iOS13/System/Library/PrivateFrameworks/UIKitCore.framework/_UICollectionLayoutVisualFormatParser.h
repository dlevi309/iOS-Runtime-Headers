/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned long long)axisForVisualFormat:(id)arg1 ;
+(id)parserWithVisualFormat:(id)arg1 ;
+(id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
-(id)initWithVisualFormat:(id)arg1 ;
-(void)_parse;
-(NSString *)visualFormat;
-(void)setVisualFormat:(NSString *)arg1 ;
@end

