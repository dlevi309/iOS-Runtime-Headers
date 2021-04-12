/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)valueClass;
-(unsigned long long)requirement;
-(id)defaultValue;
-(id)description;
-(NSString *)keyPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKey:(id)arg1 valueClass:(Class)arg2 requirement:(unsigned long long)arg3 defaultValue:(id)arg4 ;
-(id)initWithKey:(id)arg1 nestedDefinition:(id)arg2 requirement:(unsigned long long)arg3 ;
-(NUAdContextDefinition *)nestedDefinition;
-(BOOL)validateValue:(id)arg1 ;
-(void)setNestedDefinition:(NUAdContextDefinition *)arg1 ;
@end

