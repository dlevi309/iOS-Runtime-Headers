/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface TSUMutablePointerSet : NSMutableSet {

	CFSetRef mSet;

}
+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(id)init;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectEnumerator;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)allObjects;
-(void)addObject:(id)arg1 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithCFSet:(CFSetRef)arg1 ;
@end

