/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)nextObject;
-(NATreeNode *)node;
-(NSArray *)allObjects;
-(id)initWithNode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

