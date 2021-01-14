/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/VMUCallTreeNode.h>

@interface VMUCallTreePseudoNode : VMUCallTreeNode
-(BOOL)isPseudo;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildrenWithPseudoNode;
-(id)largestTopOfStackPath;
@end

