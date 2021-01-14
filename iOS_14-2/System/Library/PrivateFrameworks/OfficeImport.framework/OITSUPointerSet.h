/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface OITSUPointerSet : NSSet {

	CFSetRef mSet;

}
+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectEnumerator;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)allObjects;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithCFSet:(CFSetRef)arg1 ;
@end

