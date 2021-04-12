/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NATreeNode, NSArray;

@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying> {

	NSMutableArray* _enumeratorStack;
	NATreeNode* _node;

}

@property (nonatomic,copy,readonly) NATreeNode * node;                 //@synthesize node=_node - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nextObject;
-(NSArray *)allObjects;
-(NATreeNode *)node;
-(id)initWithNode:(id)arg1 ;
@end

