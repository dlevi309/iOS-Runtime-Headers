/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSArray;

@interface _UILibArchiveStreamingExtractor : NSObject {

	NSString* _archivePath;
	NSArray* _extractedContentAbsolutePaths;

}

@property (nonatomic,readonly) NSString * archivePath;                               //@synthesize archivePath=_archivePath - In the implementation block
@property (nonatomic,readonly) NSArray * extractedContentAbsolutePaths;              //@synthesize extractedContentAbsolutePaths=_extractedContentAbsolutePaths - In the implementation block
+(BOOL)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2 ;
+(id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1 ;
-(NSString *)archivePath;
-(id)initForExtractingArchivePath:(id)arg1 ;
-(BOOL)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id*)arg3 ;
-(NSArray *)extractedContentAbsolutePaths;
@end

