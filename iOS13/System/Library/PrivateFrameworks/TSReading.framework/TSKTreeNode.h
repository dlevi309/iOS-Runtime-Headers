/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>

@class NSString, NSMutableArray;

@interface TSKTreeNode : TSPObject {

	NSString* mDisplayName;
	id mObject;
	NSMutableArray* mChildren;

}

@property (nonatomic,retain) id dataObject; 
@property (nonatomic,retain) NSMutableArray * children; 
@property (nonatomic,retain) NSString * name; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)childEnumerator;
-(void)removeChildAtIndex:(unsigned long long)arg1 ;
-(void)removeAllChildren;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(id)dataObject;
-(void)setDataObject:(id)arg1 ;
-(void)enumerateAllChildrenWithBlock:(/*^block*/id)arg1 ;
-(id)shallowCopy;
-(id)nodeWithObject:(id)arg1 ;
-(long long)indexOfNodeWithObject:(id)arg1 ;
-(BOOL)hasChildWithName:(id)arg1 ;
-(void)addChildWithName:(id)arg1 object:(id)arg2 ;
-(void)addObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeChildWithName:(id)arg1 ;
-(void)removeChildWithDataObject:(id)arg1 ;
@end

