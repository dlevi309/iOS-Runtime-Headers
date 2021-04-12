/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL23*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithEnvelopeDictionary:(id)arg1 ;
-(id)envelopeDictionary;
-(id)initWithAdjustments:(id)arg1 ;
-(id)adjustmentAtIndex:(unsigned long long)arg1 ;
-(id)firstAdjustmentWithIdentifier:(id)arg1 ;
-(id)adjustmentsWithIdentifier:(id)arg1 ;
-(id)maskUUIDs;
@end

