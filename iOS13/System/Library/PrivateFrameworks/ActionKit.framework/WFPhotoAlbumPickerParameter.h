/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class NSArray, WFPhotoAccessResource, NSString;

@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter <PHPhotoLibraryChangeObserver> {

	NSArray* _possibleStates;
	id _defaultSerializedRepresentation;
	WFPhotoAccessResource* _photoAccessResource;

}

@property (nonatomic,retain) WFPhotoAccessResource * photoAccessResource;              //@synthesize photoAccessResource=_photoAccessResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referencedActionResourceClasses;
+(BOOL)hasPhotosAccess;
-(id)possibleStates;
-(void)photoLibraryDidChange:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)setActionResources:(id)arg1 ;
-(void)setPhotoAccessResource:(WFPhotoAccessResource *)arg1 ;
-(void)resourceAvailabilityChanged;
-(WFPhotoAccessResource *)photoAccessResource;
@end

