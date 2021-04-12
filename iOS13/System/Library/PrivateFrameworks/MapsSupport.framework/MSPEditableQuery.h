/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPQuery.h>

@class _MSPQueryState, MSPContainer, NSString;

@interface MSPEditableQuery : MSPQuery {

	_MSPQueryState* _editedState;
	MSPContainer* _container;
	NSString* _context;

}
-(id)_initWithSource:(id)arg1 ;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(id)_visibleState;
-(void)_performEditWithStateTransformation:(/*^block*/id)arg1 containerEdit:(/*^block*/id)arg2 ;
-(void)deleteContentsObjectAtIndexes:(id)arg1 ;
-(void)deleteContentsObjectAtIndex:(unsigned long long)arg1 ;
-(void)moveContentsObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end

