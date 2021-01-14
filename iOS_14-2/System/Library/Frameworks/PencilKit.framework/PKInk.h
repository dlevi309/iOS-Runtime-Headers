/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, PKInkBehavior, NSString;

@interface PKInk : NSObject <NSCopying> {

	shared_ptr<PKProtobufUnknownFields>* _unknownFields;
	UIColor* _color;
	PKInkBehavior* _behavior;
	unsigned long long _version;
	NSString* _variant;
	NSString* _identifier;
	double _weight;

}

@property (nonatomic,retain) PKInkBehavior * behavior;                   //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) unsigned long long version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * variant;                       //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) double _weight; 
@property (nonatomic,readonly) BOOL _isStrokeGeneratingInk; 
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) double weight;                            //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) NSString * inkType; 
@property (nonatomic,readonly) UIColor * color;                          //@synthesize color=_color - In the implementation block
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3 ;
+(double)defaultWeightForIdentifier:(id)arg1 ;
+(id)inkWithType:(id)arg1 color:(id)arg2 weight:(double)arg3 ;
+(double)defaultOpacityForIdentifier:(id)arg1 ;
+(id)inkWithIdentifier:(id)arg1 properties:(id)arg2 ;
+(id)identifierForInkType:(id)arg1 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 variant:(id)arg3 ;
+(id)inkFromDictionary:(id)arg1 color:(id)arg2 identifier:(id)arg3 ;
+(id)inkFromInk:(id)arg1 color:(id)arg2 ;
+(id)inkFromInk:(id)arg1 withBehavior:(id)arg2 ;
+(id)colorForLassoStroke;
+(id)identifierForCommandType:(unsigned)arg1 wantsObjectErase:(BOOL)arg2 ;
-(void)setBehavior:(PKInkBehavior *)arg1 ;
-(id)properties;
-(void)saveToArchive:(Ink*)arg1 ;
-(id)initWithArchive:(const Ink*)arg1 ;
-(id)init;
-(void)setWeight:(double)arg1 ;
-(UIColor *)color;
-(PKInkBehavior *)behavior;
-(NSString *)variant;
-(double)weight;
-(double)_weight;
-(id)description;
-(NSString *)inkType;
-(unsigned long long)hash;
-(NSString *)identifier;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isHandwritingInk;
-(BOOL)_isLassoInk;
-(BOOL)_isEraserInk;
-(BOOL)_isStrokeGeneratingInk;
-(id)initWithInkType:(id)arg1 color:(id)arg2 ;
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

