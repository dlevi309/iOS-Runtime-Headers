/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) BOOL conformsToAudio; 
@property (nonatomic,readonly) BOOL conformsToJPEG; 
@property (nonatomic,readonly) BOOL conformsToData; 
@property (getter=isDynamic,nonatomic,readonly) BOOL dynamic; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
@property (nonatomic,readonly) BOOL isLosslessEncoding; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * preferredExtension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
+(id)entityName;
+(id)jpegUniformTypeIdentifierInContext:(id)arg1 ;
+(id)uniformTypeIdentifierFromString:(id)arg1 createIfMissing:(BOOL)arg2 context:(id)arg3 ;
+(BOOL)isPlayableVideoTypeIdentifierString:(id)arg1 ;
+(id)plistUniformTypeIdentifierInContext:(id)arg1 ;
+(id)videoComplementUniformTypeIdentifierInContext:(id)arg1 ;
+(id)utisConformingToRAWInContext:(id)arg1 ;
-(BOOL)isDynamic;
-(BOOL)validateForDelete:(id*)arg1 ;
-(BOOL)supportsCloudUpload;
-(BOOL)isLosslessEncoding;
-(BOOL)conformsToAudio;
-(BOOL)isPlayableVideo;
-(BOOL)isPrimaryImageFormat;
-(BOOL)conformsToJPEG;
-(NSString *)preferredExtension;
-(BOOL)conformsToData;
@end

