/*
* Generated on Monday, March 1, 2021 at 2:35:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned long long)traits;
-(void)setTraits:(unsigned long long)arg1 ;
@end

