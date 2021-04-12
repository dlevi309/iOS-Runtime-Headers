/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UILibArchiveStreamingReader, NSString;

@interface _UIArchiveListingController : NSObject {

	_UILibArchiveStreamingReader* _archiveReader;
	BOOL _isValidArchive;
	BOOL _excludeDotFilesFromResults;
	NSString* _archivePath;
	long long _appleDoubleIdentificationType;

}

@property (nonatomic,readonly) NSString * archivePath;                             //@synthesize archivePath=_archivePath - In the implementation block
@property (assign,nonatomic) long long appleDoubleIdentificationType;              //@synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType - In the implementation block
@property (assign,nonatomic) BOOL excludeDotFilesFromResults;                      //@synthesize excludeDotFilesFromResults=_excludeDotFilesFromResults - In the implementation block
-(void)dealloc;
-(void)setAppleDoubleIdentificationType:(long long)arg1 ;
-(NSString *)archivePath;
-(long long)appleDoubleIdentificationType;
-(BOOL)determineIsReadableArchive;
-(BOOL)_shouldVisitItem:(id)arg1 ;
-(BOOL)excludeDotFilesFromResults;
-(id)initWithArchivePath:(id)arg1 ;
-(BOOL)enumerateLogicalItemsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setExcludeDotFilesFromResults:(BOOL)arg1 ;
@end

