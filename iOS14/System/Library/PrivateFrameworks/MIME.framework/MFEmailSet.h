/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <EmailAddressing/EAEmailAddressSet.h>

@interface MFEmailSet : EAEmailAddressSet {

	CFSetRef _set;

}
+(id)set;
-(id)serializedRepresentation;
-(void)intersectSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectEnumerator;
-(BOOL)isEqualToSet:(id)arg1 ;
-(unsigned long long)count;
-(void)minusSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)allObjects;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(id)_generateAllObjectsFromSelector:(SEL)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(void)_setupSetWithCapacity:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allCommentedAddresses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)dealloc;
@end

