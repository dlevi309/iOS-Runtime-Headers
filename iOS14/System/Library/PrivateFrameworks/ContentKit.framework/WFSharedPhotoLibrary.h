/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/PHPhotoLibraryAvailabilityObserver.h>

@class PHPhotoLibrary, NSString;

@interface WFSharedPhotoLibrary : NSObject <PHPhotoLibraryAvailabilityObserver> {

	PHPhotoLibrary* _systemPhotoLibrary;

}

@property (nonatomic,retain) PHPhotoLibrary * systemPhotoLibrary;              //@synthesize systemPhotoLibrary=_systemPhotoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLibrary;
-(PHPhotoLibrary *)systemPhotoLibrary;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(id)systemPhotoLibraryWithError:(id*)arg1 ;
-(id)fetchOptionsWithError:(id*)arg1 ;
-(void)setSystemPhotoLibrary:(PHPhotoLibrary *)arg1 ;
@end

