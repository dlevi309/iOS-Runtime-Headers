/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSURL, PHPersistentChangeToken;

@interface PGLibraryChangeListenerStateStore : NSObject {

	NSURL* _changeTokenURL;

}

@property (nonatomic,readonly) PHPersistentChangeToken * changeToken; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPersistentChangeToken *)changeToken;
-(void)setChangeToken:(PHPersistentChangeToken *)arg1 ;
@end

