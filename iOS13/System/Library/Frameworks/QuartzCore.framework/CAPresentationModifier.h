/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(id)value;
-(NSString *)keyPath;
-(void)setValue:(id)arg1 ;
-(BOOL)isEnabled;
-(CAPresentationModifierGroup *)group;
-(id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 group:(id)arg4 ;
-(Object*)CA_copyRenderValue;
-(BOOL)additive;
-(id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 ;
-(void)write;
@end

