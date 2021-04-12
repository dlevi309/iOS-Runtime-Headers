/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLDCFUtilities : NSObject
+(id)dcfRegex;
+(id)renderDCFRegex;
+(BOOL)isValidDCFFileName:(id)arg1 ;
+(id)dcfCompliantNameForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 filenameMarker:(id)arg4 ;
+(id)dcfRegexForAuxiliaryResourceFilenameMarker:(id)arg1 ;
+(id)fileNameByRemovingRenderMarkerInFileName:(id)arg1 ;
+(BOOL)isSpatialOverCaptureFileName:(id)arg1 ;
+(id)fileNameByRemovingSpatialOverCaptureMarkerInFileName:(id)arg1 ;
+(BOOL)fileName:(id)arg1 matchesRegex:(id)arg2 ;
+(id)makeDCFFileNameFromFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(unsigned)hashForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)makeDCFFileNameByHashingFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)insertAuxiliaryResourceTypeMarker:(id)arg1 intoFileName:(id)arg2 ;
+(void)computeSHA256OfString:(id)arg1 intoBuffer:(char*)arg2 ;
+(id)encodeFileNameFromHash:(unsigned)arg1 ;
+(id)convertHash:(unsigned)arg1 usingPlaceValues:(id)arg2 ;
+(id)placeValuesFromBases:(id)arg1 ;
+(BOOL)isRenderFileName:(id)arg1 ;
@end

