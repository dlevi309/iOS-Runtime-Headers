/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class NSArray, WFPhotoAccessResource, NSString;

@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter <PHPhotoLibraryChangeObserver> {

	BOOL _includesSmartAlbum;
	NSArray* _possibleStates;
	id _defaultSerializedRepresentation;
	WFPhotoAccessResource* _photoAccessResource;

}

@property (nonatomic,retain) WFPhotoAccessResource * photoAccessResource;              //@synthesize photoAccessResource=_photoAccessResource - In the implementation block
@property (nonatomic,readonly) BOOL includesSmartAlbum;                                //@synthesize includesSmartAlbum=_includesSmartAlbum - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referencedActionResourceClasses;
+(BOOL)hasPhotosAccess;
-(id)sharedLibrary;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
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
-(BOOL)includesSmartAlbum;
@end

