/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INObject.h>

@class INCodable, INCodableDescription;

@interface INCustomObject : INObject {

	INCodable* _backingStore;

}

@property (setter=_setBackingStore:,nonatomic,retain) INCodable * _backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) INCodableDescription * codableDescription; 
+(BOOL)supportsSecureCoding;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)_initWithCodableDescription:(id)arg1 ;
-(BOOL)_isValidKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithObject:(id)arg1 codableDescription:(id)arg2 ;
-(INCodableDescription *)codableDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(INCodable *)_backingStore;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setBackingStore:(id)arg1 ;
@end

