/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)archivePath;
-(void)setAppleDoubleIdentificationType:(long long)arg1 ;
-(long long)appleDoubleIdentificationType;
-(BOOL)_shouldVisitItem:(id)arg1 ;
-(id)initWithArchivePath:(id)arg1 ;
-(BOOL)determineIsReadableArchive;
-(BOOL)excludeDotFilesFromResults;
-(BOOL)enumerateLogicalItemsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setExcludeDotFilesFromResults:(BOOL)arg1 ;
-(void)dealloc;
@end

