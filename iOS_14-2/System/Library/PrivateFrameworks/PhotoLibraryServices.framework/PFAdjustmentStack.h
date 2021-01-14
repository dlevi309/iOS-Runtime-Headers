/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration> {

	NSArray* _adjustments;
	NSOrderedSet* _maskUUIDs;
	unsigned long long _formatVersion;

}
+(BOOL)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2 ;
-(id)maskUUIDs;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF40*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)debugDescription;
-(unsigned long long)count;
-(id)initWithAdjustments:(id)arg1 ;
-(id)adjustmentAtIndex:(unsigned long long)arg1 ;
-(id)firstAdjustmentWithIdentifier:(id)arg1 ;
-(id)adjustmentsWithIdentifier:(id)arg1 ;
-(id)description;
-(id)envelopeDictionary;
-(id)initWithEnvelopeDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

