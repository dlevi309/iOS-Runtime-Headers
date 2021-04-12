/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <EmailAddressing/EAEmailAddressSet.h>

@interface MFEmailSet : EAEmailAddressSet {

	CFSetRef _set;

}
+(id)set;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)allObjects;
-(id)initWithSet:(id)arg1 ;
-(BOOL)isEqualToSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)serializedRepresentation;
-(id)allCommentedAddresses;
-(void)_setupSetWithCapacity:(unsigned long long)arg1 ;
-(id)_generateAllObjectsFromSelector:(SEL)arg1 ;
@end

