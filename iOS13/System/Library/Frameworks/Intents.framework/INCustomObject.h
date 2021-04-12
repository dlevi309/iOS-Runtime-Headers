/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(INCodable *)_backingStore;
-(id)_initWithCodableDescription:(id)arg1 ;
-(id)initWithObject:(id)arg1 codableDescription:(id)arg2 ;
-(INCodableDescription *)codableDescription;
-(BOOL)_isValidKey:(id)arg1 ;
-(void)_setBackingStore:(id)arg1 ;
@end

