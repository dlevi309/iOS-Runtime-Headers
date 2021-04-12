/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)_createDestinationRoot:(id*)arg1 ;
-(id)initWithSourceArchivePath:(id)arg1 destinationExtractionRootPath:(id)arg2 ;
-(BOOL)extractArchiveContent:(id*)arg1 ;
-(id)extractedContentAbsolutePathsMatchingPredicate:(/*^block*/id)arg1 ;
-(NSString *)sourceArchivePath;
-(NSString *)destinationExtractionRootPath;
-(void)setDestinationExtractionRootPath:(NSString *)arg1 ;
-(NSString *)destinationContentProtectionType;
-(void)setDestinationContentProtectionType:(NSString *)arg1 ;
-(NSString *)sourceArchiveExtractionRootPath;
-(void)setSourceArchiveExtractionRootPath:(NSString *)arg1 ;
@end

