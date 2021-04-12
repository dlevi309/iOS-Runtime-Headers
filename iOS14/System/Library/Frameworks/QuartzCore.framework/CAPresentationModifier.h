/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString, CAPresentationModifierGroup;

@interface CAPresentationModifier : NSObject {

	void* _impl;
	id _keyPath;
	id _value;
	id _group;
	int _l;
	unsigned _f;

}

@property (copy,readonly) NSString * keyPath; 
@property (readonly) BOOL additive; 
@property (readonly) CAPresentationModifierGroup * group; 
@property (retain) id value; 
@property (getter=isEnabled) BOOL enabled; 
-(CAPresentationModifierGroup *)group;
-(void)write;
-(id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 group:(id)arg4 ;
-(BOOL)additive;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)debugDescription;
-(Object*)CA_copyRenderValue;
-(void)setValue:(id)arg1 ;
-(NSString *)keyPath;
-(BOOL)isEnabled;
-(id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 ;
-(id)value;
-(void)dealloc;
@end

