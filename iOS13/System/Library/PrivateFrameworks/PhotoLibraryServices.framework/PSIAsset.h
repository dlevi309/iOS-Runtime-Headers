/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSIObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSIDate;

@interface PSIAsset : PSIObject <NSCopying> {

	PSIDate* _creationDate;

}

@property (readonly) PSIDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(PSIDate *)creationDate;
-(id)initWithUUID:(id)arg1 creationDate:(id)arg2 ;
@end

