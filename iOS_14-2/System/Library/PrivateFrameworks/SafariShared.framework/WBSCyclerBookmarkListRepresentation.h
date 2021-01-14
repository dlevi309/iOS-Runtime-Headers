/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSCyclerBookmarkRepresentation.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration> {

	NSMutableArray* _children;

}

@property (nonatomic,readonly) unsigned long long numberOfChildren; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEquivalent:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_WB33*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)numberOfChildren;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1 ;
-(BOOL)_tryToDeleteDescendant:(id)arg1 ;
-(BOOL)containsChild:(id)arg1 ;
-(BOOL)containsDescendant:(id)arg1 ;
-(id)descendantWithUniqueIdentifier:(id)arg1 ;
-(id)allDescendantsPassingTest:(/*^block*/id)arg1 ;
-(id)randomDescendantPassingTest:(/*^block*/id)arg1 ;
-(void)deleteChild:(id)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)deleteDescendant:(id)arg1 ;
-(void)deleteAllChildren;
-(id)randomDescendant;
-(id)randomListDescendant;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

