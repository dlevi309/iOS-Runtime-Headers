/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPTPAssetReader.h>

@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader {

	PHMediaFormatConversionDestination* _destination;

}

@property (retain) PHMediaFormatConversionDestination * destination;              //@synthesize destination=_destination - In the implementation block
-(void)setDestination:(PHMediaFormatConversionDestination *)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
-(id)path;
-(PHMediaFormatConversionDestination *)destination;
@end

