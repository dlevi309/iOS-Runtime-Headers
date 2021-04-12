/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSMutableDictionary, NUIdentifier, NUAdjustment, NSDictionary, NSString, NSArray;

@interface PIAdjustmentController : NSObject {

	NSMutableDictionary* _changes;
	NUIdentifier* _identifier;
	NUAdjustment* _adjustment;

}

@property (nonatomic,readonly) NSDictionary * settings; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,retain) NUIdentifier * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NUAdjustment * adjustment;               //@synthesize adjustment=_adjustment - In the implementation block
@property (nonatomic,readonly) NSArray * inputKeys; 
@property (nonatomic,readonly) NSArray * displayInputKeys; 
@property (nonatomic,readonly) BOOL canBeEnabled; 
+(id)autoKey;
+(id)enabledKey;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NUIdentifier *)identifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setIdentifier:(NUIdentifier *)arg1 ;
-(NSString *)displayName;
-(NSArray *)inputKeys;
-(NSDictionary *)settings;
-(BOOL)_isDefault;
-(BOOL)canBeEnabled;
-(BOOL)isEqual:(id)arg1 forKeys:(id)arg2 ;
-(BOOL)isAuto;
-(NUAdjustment *)adjustment;
-(void)setFromAdjustment:(id)arg1 ;
-(void)setIsAuto:(BOOL)arg1 ;
-(BOOL)canHaveAuto;
-(BOOL)isEqual:(id)arg1 visualChangesOnly:(BOOL)arg2 ;
-(id)initWithAdjustment:(id)arg1 ;
-(id)settingForKey:(id)arg1 ;
-(NSArray *)displayInputKeys;
-(BOOL)hasInputKey:(id)arg1 ;
-(BOOL)hasAutoKeyInSchema;
-(id)valuesForArrayInputKey:(id)arg1 ;
-(void)interpolateFromStart:(id)arg1 toEnd:(id)arg2 progress:(double)arg3 ;
-(SCD_Struct_PI7)timeFromInputKey:(id)arg1 timescaleKey:(id)arg2 ;
-(id)visualInputKeys;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
-(void)_setPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)_primitiveValueForKey:(id)arg1 ;
@end

