/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBInheritanceCollection.h>

@class NSCountedSet;

@interface RBMutableInheritanceCollection : RBInheritanceCollection {

	NSCountedSet* _countedNamespaces;

}
+(id)collectionWithInheritances:(id)arg1 ;
-(void)addInheritance:(id)arg1 ;
-(void)removeInheritance:(id)arg1 ;
-(void)unionCollection:(id)arg1 ;
-(id)allNamespaces;
-(id)_initWithCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

