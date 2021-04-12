/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, PKInkBehavior;

@interface PKInk : NSObject <NSCopying> {

	shared_ptr<PKProtobufUnknownFields>* _unknownFields;
	NSString* _type;
	NSString* _identifier;
	UIColor* _color;
	double _weight;
	PKInkBehavior* _behavior;
	unsigned long long _version;
	NSString* _variant;

}

@property (nonatomic,retain) PKInkBehavior * behavior;                  //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * variant;                      //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) double _weight; 
@property (nonatomic,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIColor * color;                         //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double weight;                           //@synthesize weight=_weight - In the implementation block
+(id)akInkFromInk:(id)arg1 color:(id)arg2 strokeWidth:(double)arg3 ;
+(double)inkWeightFromAKValue:(double)arg1 ;
+(id)akDefaultInkWithIdentifier:(id)arg1 ;
+(id)akDefaultInkWithIdentifier:(id)arg1 color:(id)arg2 strokeWidth:(double)arg3 ;
+(id)akInkFromInk:(id)arg1 strokeWidth:(double)arg2 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3 ;
+(id)inkFromInk:(id)arg1 color:(id)arg2 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 ;
+(double)defaultWeightForIdentifier:(id)arg1 ;
+(id)inkWithType:(id)arg1 color:(id)arg2 weight:(double)arg3 ;
+(double)defaultOpacityForIdentifier:(id)arg1 ;
+(id)inkWithIdentifier:(id)arg1 properties:(id)arg2 ;
+(id)colorForLassoStroke;
+(id)identifierForInkType:(id)arg1 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 variant:(id)arg3 ;
+(id)inkFromDictionary:(id)arg1 color:(id)arg2 identifier:(id)arg3 ;
+(id)inkFromInk:(id)arg1 withBehavior:(id)arg2 ;
+(id)identifierForCommandType:(unsigned)arg1 wantsObjectErase:(BOOL)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSString *)identifier;
-(unsigned long long)version;
-(double)_weight;
-(NSString *)variant;
-(UIColor *)color;
-(id)properties;
-(void)setWeight:(double)arg1 ;
-(double)weight;
-(PKInkBehavior *)behavior;
-(void)setBehavior:(PKInkBehavior *)arg1 ;
-(void)saveToArchive:(Ink*)arg1 ;
-(id)initWithArchive:(const Ink*)arg1 ;
-(id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 ;
-(id)initWithV1Archive:(const Ink*)arg1 serializationVersion:(unsigned long long)arg2 ;
-(void)saveToV1Archive:(Ink*)arg1 ;
-(void)_addTestDataToUnknownFields;
-(id)_dataInUnknownFields;
-(id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 weight:(double)arg5 ;
-(id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 behavior:(id)arg5 ;
-(BOOL)isEqualInk:(id)arg1 ;
-(unsigned long long)hashValueForFloat:(double)arg1 ;
@end

