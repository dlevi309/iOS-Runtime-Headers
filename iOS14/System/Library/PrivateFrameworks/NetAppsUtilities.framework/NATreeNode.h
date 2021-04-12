/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, NSMutableSet, NSSet, NSEnumerator;

@interface NATreeNode : NSObject <NSObject, NSCopying, NSMutableCopying, NAIdentifiable, NSFastEnumeration> {

	id _representedObject;
	NSMutableSet* _internalChildNodes;

}

@property (nonatomic,copy) NSMutableSet * internalChildNodes;                                  //@synthesize internalChildNodes=_internalChildNodes - In the implementation block
@property (nonatomic,retain) id representedObject;                                             //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,copy,readonly) NSSet * childNodes; 
@property (nonatomic,readonly) NSEnumerator * shallowRepresentedObjectEnumerator; 
@property (nonatomic,readonly) NSEnumerator * shallowNodeEnumerator; 
@property (nonatomic,readonly) NSEnumerator * deepNodeEnumerator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(id)hf_nodeWithKeyPath:(id)arg1 ;
-(id)hf_sortedAccessorySettingsChildren;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NA1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(NSSet *)childNodes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)representedObject;
-(NSEnumerator *)shallowNodeEnumerator;
-(id)initWithRepresentedObject:(id)arg1 childNodes:(id)arg2 ;
-(NSMutableSet *)internalChildNodes;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSEnumerator *)deepNodeEnumerator;
-(id)childrenSortedByComparator:(/*^block*/id)arg1 ;
-(id)childAtIndexPath:(id)arg1 withChildrenSortedByComparator:(/*^block*/id)arg2 ;
-(NSEnumerator *)shallowRepresentedObjectEnumerator;
-(void)setInternalChildNodes:(NSMutableSet *)arg1 ;
@end

