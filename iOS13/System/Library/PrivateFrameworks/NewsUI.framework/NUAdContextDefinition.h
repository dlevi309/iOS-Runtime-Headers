/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)addPropertyDefinition:(id)arg1 ;
-(NSMutableSet *)mutablePropertyDefinitions;
-(NSSet *)propertyDefinitions;
-(BOOL)isPropertyDefinitionValid:(id)arg1 ;
-(NSMutableDictionary *)nestedContextDefinitions;
@end

