/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NUAdContextDefinition;

@interface NUAdContextPropertyDefinition : NSObject <NSCopying> {

	NSString* _keyPath;
	Class _valueClass;
	unsigned long long _requirement;
	id _defaultValue;
	NUAdContextDefinition* _nestedDefinition;

}

@property (nonatomic,copy,readonly) NSString * keyPath;                             //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) Class valueClass;                                    //@synthesize valueClass=_valueClass - In the implementation block
@property (nonatomic,readonly) unsigned long long requirement;                      //@synthesize requirement=_requirement - In the implementation block
@property (nonatomic,readonly) id defaultValue;                                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NUAdContextDefinition * nestedDefinition;              //@synthesize nestedDefinition=_nestedDefinition - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPath;
-(unsigned long long)requirement;
-(Class)valueClass;
-(id)defaultValue;
-(id)initWithKey:(id)arg1 valueClass:(Class)arg2 requirement:(unsigned long long)arg3 defaultValue:(id)arg4 ;
-(id)initWithKey:(id)arg1 nestedDefinition:(id)arg2 requirement:(unsigned long long)arg3 ;
-(NUAdContextDefinition *)nestedDefinition;
-(BOOL)validateValue:(id)arg1 ;
-(void)setNestedDefinition:(NUAdContextDefinition *)arg1 ;
@end

