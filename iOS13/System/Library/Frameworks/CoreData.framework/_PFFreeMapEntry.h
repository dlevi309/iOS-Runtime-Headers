/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableSet;

@interface _PFFreeMapEntry : NSObject {

	int _retainCount;
	NSMutableSet* _owners;

}
-(id)init;
-(void)dealloc;
-(BOOL)decrement;
-(void)addOwner:(id)arg1 ;
-(void)removeOwner:(id)arg1 ;
-(void)removeAllOwners;
@end

