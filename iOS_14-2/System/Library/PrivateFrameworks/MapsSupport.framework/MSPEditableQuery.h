/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_visibleState;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(void)_performEditWithStateTransformation:(/*^block*/id)arg1 containerEdit:(/*^block*/id)arg2 ;
-(void)deleteContentsObjectAtIndexes:(id)arg1 ;
-(void)deleteContentsObjectAtIndex:(unsigned long long)arg1 ;
-(void)moveContentsObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
@end

