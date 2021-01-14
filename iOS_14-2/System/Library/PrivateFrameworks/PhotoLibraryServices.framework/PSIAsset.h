/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PSIDate *)creationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(id)arg1 creationDate:(id)arg2 ;
@end

