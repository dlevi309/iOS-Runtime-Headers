/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, NSString;

@interface _UIArchiveExtractionController : NSObject {

	NSArray* _extractedContentAbsolutePaths;
	NSString* _sourceArchivePath;
	NSString* _destinationExtractionRootPath;
	NSString* _destinationContentProtectionType;
	NSString* _sourceArchiveExtractionRootPath;

}

@property (nonatomic,readonly) NSString * sourceArchivePath;                           //@synthesize sourceArchivePath=_sourceArchivePath - In the implementation block
@property (nonatomic,retain) NSString * destinationExtractionRootPath;                 //@synthesize destinationExtractionRootPath=_destinationExtractionRootPath - In the implementation block
@property (nonatomic,retain) NSString * destinationContentProtectionType;              //@synthesize destinationContentProtectionType=_destinationContentProtectionType - In the implementation block
@property (nonatomic,retain) NSString * sourceArchiveExtractionRootPath;               //@synthesize sourceArchiveExtractionRootPath=_sourceArchiveExtractionRootPath - In the implementation block
-(id)initWithSourceArchivePath:(id)arg1 destinationExtractionRootPath:(id)arg2 ;
-(BOOL)extractArchiveContent:(id*)arg1 ;
-(NSString *)sourceArchivePath;
-(BOOL)_createDestinationRoot:(id*)arg1 ;
-(id)extractedContentAbsolutePathsMatchingPredicate:(/*^block*/id)arg1 ;
-(NSString *)destinationExtractionRootPath;
-(void)setDestinationExtractionRootPath:(NSString *)arg1 ;
-(NSString *)destinationContentProtectionType;
-(void)setDestinationContentProtectionType:(NSString *)arg1 ;
-(NSString *)sourceArchiveExtractionRootPath;
-(void)setSourceArchiveExtractionRootPath:(NSString *)arg1 ;
@end

