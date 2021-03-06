/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditContentUpdate.h>

@protocol MSPMutableObject, MSPImmutableObject;
@class NSString;

@interface _MSPContainerEditContentUpdate : _MSPContainerEdit <MSPContainerEditContentUpdate> {

	id<MSPMutableObject> _updatedObject;
	id<MSPImmutableObject> _updatedImmutableObject;

}

@property (nonatomic,readonly) id<MSPMutableObject> updatedObject;                         //@synthesize updatedObject=_updatedObject - In the implementation block
@property (nonatomic,readonly) id<MSPImmutableObject> updatedImmutableObject;              //@synthesize updatedImmutableObject=_updatedImmutableObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<MSPImmutableObject>)updatedImmutableObject;
-(id)initWithUpdatedObject:(id)arg1 ;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(id<MSPMutableObject>)updatedObject;
-(id)initWithUpdatedImmutableObject:(id)arg1 ;
@end

