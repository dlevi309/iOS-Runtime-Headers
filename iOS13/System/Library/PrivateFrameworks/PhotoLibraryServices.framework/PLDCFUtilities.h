/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLDCFUtilities : NSObject
+(BOOL)isRenderFileName:(id)arg1 ;
+(id)dcfRegex;
+(BOOL)isValidDCFFileName:(id)arg1 ;
+(id)dcfCompliantNameForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 filenameMarker:(id)arg4 ;
+(id)dcfRegexForAuxiliaryResourceFilenameMarker:(id)arg1 ;
+(id)renderDCFRegex;
+(id)fileNameByRemovingRenderMarkerInFileName:(id)arg1 ;
+(BOOL)isSpatialOverCaptureFileName:(id)arg1 ;
+(id)fileNameByRemovingSpatialOverCaptureMarkerInFileName:(id)arg1 ;
+(BOOL)fileName:(id)arg1 matchesRegex:(id)arg2 ;
+(id)makeDCFFileNameFromFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)makeDCFFileNameByHashingFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)insertAuxiliaryResourceTypeMarker:(id)arg1 intoFileName:(id)arg2 ;
+(unsigned)hashForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(void)computeSHA256OfString:(id)arg1 intoBuffer:(char*)arg2 ;
+(id)encodeFileNameFromHash:(unsigned)arg1 ;
+(id)convertHash:(unsigned)arg1 usingPlaceValues:(id)arg2 ;
+(id)placeValuesFromBases:(id)arg1 ;
@end

