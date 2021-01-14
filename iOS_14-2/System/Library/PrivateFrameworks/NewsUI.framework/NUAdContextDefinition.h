/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface NUAdContextDefinition : NSObject <NSCopying> {

	NSMutableDictionary* _nestedContextDefinitions;
	NSMutableSet* _mutablePropertyDefinitions;

}

@property (nonatomic,readonly) NSMutableDictionary * nestedContextDefinitions;              //@synthesize nestedContextDefinitions=_nestedContextDefinitions - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutablePropertyDefinitions;                   //@synthesize mutablePropertyDefinitions=_mutablePropertyDefinitions - In the implementation block
@property (nonatomic,readonly) NSSet * propertyDefinitions; 
+(id)definition;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)propertyDefinitions;
-(void)addPropertyDefinition:(id)arg1 ;
-(NSMutableSet *)mutablePropertyDefinitions;
-(BOOL)isPropertyDefinitionValid:(id)arg1 ;
-(NSMutableDictionary *)nestedContextDefinitions;
@end

