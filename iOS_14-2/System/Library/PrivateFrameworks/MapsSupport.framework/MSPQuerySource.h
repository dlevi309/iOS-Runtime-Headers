/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPContainerObserver.h>
#import <libobjc.A.dylib/MSPQuerySourceObserver.h>

@class MSPContainer, NSHashTable, _MSPQueryState, NSString;

@interface MSPQuerySource : NSObject <MSPContainerObserver, MSPQuerySourceObserver> {

	MSPContainer* _owningContainer;
	MSPQuerySource* _parentSource;
	/*^block*/id _mappingBlock;
	/*^block*/id _preprocessingBlock;
	NSHashTable* _observers;
	_MSPQueryState* _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_container;
-(void)_addObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(id)newQuery;
-(void)_didReceiveContainerContents:(id)arg1 context:(id)arg2 ;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(id)_initWithParentSource:(id)arg1 preprocessingBlock:(/*^block*/id)arg2 mappingBlock:(/*^block*/id)arg3 ;
-(id)_initWithOwningContainer:(id)arg1 ;
-(id)sourceByMappingContentsUsingBlock:(/*^block*/id)arg1 ;
-(id)sourceByMappingContentsUsingPreprocessingBlock:(/*^block*/id)arg1 mappingBlock:(/*^block*/id)arg2 ;
-(id)newEditableQuery;
@end

