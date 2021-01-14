/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NUIdentifier * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEnabled;
-(NUAdjustmentSchema *)schema;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(NSDictionary *)settings;
-(unsigned long long)hash;
-(void)reset;
-(NUIdentifier *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAdjustmentSchema:(id)arg1 ;
-(BOOL)isEqualToAdjustment:(id)arg1 ;
@end

