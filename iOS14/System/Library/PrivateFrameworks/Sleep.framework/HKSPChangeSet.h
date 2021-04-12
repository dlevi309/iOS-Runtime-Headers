/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSArray, NSString;

@interface HKSPChangeSet : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding> {

	NSMutableDictionary* _changeDictionary;

}

@property (nonatomic,readonly) NSMutableDictionary * changeDictionary;              //@synthesize changeDictionary=_changeDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * changes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSArray *)changes;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)addChange:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithChangeDictionary:(id)arg1 ;
-(NSMutableDictionary *)changeDictionary;
-(void)applyChangeSet:(id)arg1 ;
-(BOOL)hasChangeForPropertyIdentifier:(id)arg1 ;
-(id)changedValueForPropertyIdentifier:(id)arg1 ;
-(id)originalValueForPropertyIdentifier:(id)arg1 ;
-(void)removeAllChanges;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

