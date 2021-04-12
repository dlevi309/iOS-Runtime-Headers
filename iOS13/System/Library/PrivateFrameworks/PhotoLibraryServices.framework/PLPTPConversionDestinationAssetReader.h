/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPTPAssetReader.h>

@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader {

	PHMediaFormatConversionDestination* _destination;

}

@property (retain) PHMediaFormatConversionDestination * destination;              //@synthesize destination=_destination - In the implementation block
-(id)path;
-(PHMediaFormatConversionDestination *)destination;
-(void)setDestination:(PHMediaFormatConversionDestination *)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
@end

