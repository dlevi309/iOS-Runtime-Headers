/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSArray, MPModelObject;

@interface MPStoreItemLibraryImport : NSObject {

	BOOL _addToCloudLibrary;
	NSArray* _importElements;
	MPModelObject* _referralObject;

}

@property (nonatomic,readonly) NSArray * importElements;                    //@synthesize importElements=_importElements - In the implementation block
@property (nonatomic,readonly) BOOL addToCloudLibrary;                      //@synthesize addToCloudLibrary=_addToCloudLibrary - In the implementation block
@property (nonatomic,readonly) MPModelObject * referralObject;              //@synthesize referralObject=_referralObject - In the implementation block
-(MPModelObject *)referralObject;
-(NSArray *)importElements;
-(id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(BOOL)arg2 ;
-(id)initWithImportElements:(id)arg1 referralObject:(id)arg2 usingCloudLibraryDestination:(BOOL)arg3 ;
-(BOOL)addToCloudLibrary;
@end

