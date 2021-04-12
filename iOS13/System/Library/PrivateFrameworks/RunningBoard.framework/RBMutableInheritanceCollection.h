/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBInheritanceCollection.h>

@class NSCountedSet;

@interface RBMutableInheritanceCollection : RBInheritanceCollection {

	NSCountedSet* _countedNamespaces;

}
+(id)collectionWithInheritances:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allNamespaces;
-(void)unionCollection:(id)arg1 ;
-(void)addInheritance:(id)arg1 ;
-(void)removeInheritance:(id)arg1 ;
-(id)_initWithCollection:(id)arg1 ;
@end

