/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainData.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray, NSString;

@interface STActivityAttributionCatalog : NSObject <STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding> {

	NSMutableDictionary* _attributionsByKey;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * attributionsByKey;              //@synthesize attributionsByKey=_attributionsByKey - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCatalog:(id)arg1 ;
-(id)succinctDescription;
-(id)attributionsForKey:(id)arg1 ;
-(id)init;
-(void)enumerateAttributionsUsingBlock:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSMutableDictionary *)attributionsByKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)diffFromData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAttributionsByKey:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEmpty;
-(id)succinctDescriptionBuilder;
-(NSArray *)allKeys;
-(id)dataByApplyingDiff:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

