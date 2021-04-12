/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSArray;

@interface _UILibArchiveStreamingExtractor : NSObject {

	NSString* _archivePath;
	NSArray* _extractedContentAbsolutePaths;

}

@property (nonatomic,readonly) NSString * archivePath;                               //@synthesize archivePath=_archivePath - In the implementation block
@property (nonatomic,readonly) NSArray * extractedContentAbsolutePaths;              //@synthesize extractedContentAbsolutePaths=_extractedContentAbsolutePaths - In the implementation block
+(id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1 ;
+(BOOL)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2 ;
-(id)initForExtractingArchivePath:(id)arg1 ;
-(BOOL)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id*)arg3 ;
-(NSString *)archivePath;
-(NSArray *)extractedContentAbsolutePaths;
@end

