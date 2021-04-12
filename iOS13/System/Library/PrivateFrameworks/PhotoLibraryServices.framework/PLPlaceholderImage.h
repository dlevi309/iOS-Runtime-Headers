/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache;

@interface PLPlaceholderImage : NSObject {

	NSCache* _dumbCache;

}
+(id)sharedManager;
-(id)init;
-(CGImageRef)newPlaceholderImageWithSize:(CGSize)arg1 ;
@end

