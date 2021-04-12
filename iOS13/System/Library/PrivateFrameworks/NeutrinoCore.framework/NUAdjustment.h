/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUIdentifiable.h>

@class NUIdentifier, NUAdjustmentSchema, NSDictionary, NSString;

@interface NUAdjustment : NSObject <NUIdentifiable> {

	NUIdentifier* _identifier;
	NUAdjustmentSchema* _schema;

}

@property (nonatomic,readonly) NSDictionary * settings; 
@property (nonatomic,readonly) NUAdjustmentSchema * schema;              //@synthesize schema=_schema - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NUIdentifier * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NUIdentifier *)identifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)reset;
-(NUAdjustmentSchema *)schema;
-(NSDictionary *)settings;
-(BOOL)isEqualToAdjustment:(id)arg1 ;
-(id)initWithAdjustmentSchema:(id)arg1 ;
@end

