/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
*/


@class NSString;

@interface AXLiveRegionNode : NSObject {

	NSString* _label;
	NSString* _value;
	unsigned long long _traits;
	id _object;

}

@property (nonatomic,retain) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long traits;              //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic,__weak) id object;                       //@synthesize object=_object - In the implementation block
+(id)createNodeFromObject:(id)arg1 ;
-(unsigned long long)traits;
-(id)object;
-(void)setTraits:(unsigned long long)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

