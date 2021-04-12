/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NADiffableItemGroup.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NASimpleDiffableItemGroup : NSObject <NADiffableItemGroup, NSCopying> {

	NSString* _groupIdentifier;
	NSArray* _diffableItems;

}

@property (nonatomic,copy) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * diffableItems;                 //@synthesize diffableItems=_diffableItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSArray *)diffableItems;
-(void)setDiffableItems:(NSArray *)arg1 ;
@end

