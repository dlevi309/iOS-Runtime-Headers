/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLUniformTypeIdentifierIdentity.h>

@class NSNumber, NSString;

@interface PLUniformTypeIdentifier : PLManagedObject <PLUniformTypeIdentifierIdentity> {

	NSNumber* _isLosslessEncoding;
	NSNumber* _conformsToJPEG;

}

@property (assign,nonatomic) BOOL conformsToRawImage; 
@property (assign,nonatomic) BOOL conformsToImage; 
@property (assign,nonatomic) BOOL conformsToMovie; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) BOOL conformsToAudio; 
@property (nonatomic,readonly) BOOL conformsToJPEG; 
@property (nonatomic,readonly) BOOL conformsToData; 
@property (getter=isDynamic,nonatomic,readonly) BOOL dynamic; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
@property (nonatomic,readonly) BOOL isLosslessEncoding; 
@property (nonatomic,copy,readonly) NSString * preferredExtension; 
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)videoComplementUniformTypeIdentifierInContext:(id)arg1 ;
+(id)jpegUniformTypeIdentifierInContext:(id)arg1 ;
+(void)applyPersistedConformanceValuesToUTI:(id)arg1 ;
+(id)utisConformingToRAWInContext:(id)arg1 ;
+(id)uniformTypeIdentifierFromString:(id)arg1 createIfMissing:(BOOL)arg2 context:(id)arg3 ;
+(id)plistUniformTypeIdentifierInContext:(id)arg1 ;
+(BOOL)isPlayableVideoTypeIdentifierString:(id)arg1 ;
+(id)_commonConformanceValuesForUTIString:(id)arg1 ;
-(BOOL)supportsCloudUpload;
-(NSString *)preferredExtension;
-(BOOL)isPlayableVideo;
-(BOOL)isDynamic;
-(BOOL)isPrimaryImageFormat;
-(void)refreshPersistedConformanceValues;
-(BOOL)conformsToAudio;
-(BOOL)isLosslessEncoding;
-(BOOL)conformsToJPEG;
-(BOOL)conformsToData;
-(BOOL)validateForDelete:(id*)arg1 ;
@end

