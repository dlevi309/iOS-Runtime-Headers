/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDocumentMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class NSMutableArray, NSString, OIXMLDocument, OIXMLElement, EDWorkbook;

@interface EMWorkbookMapper : CMDocumentMapper <CMMapperRoot> {

	unsigned long long mRealSheetCount;
	int mWidth;
	int mHeight;
	NSMutableArray* mWorksheetUrls;
	NSMutableArray* mWorksheetNames;
	NSMutableArray* mWorksheetGuids;
	NSString* mResourceUrlPrefix;
	NSString* mResourceUrlProtocol;
	NSString* mStyleSheetGuid;
	NSString* mFileName;
	unsigned mSheetIndex;
	BOOL mIsFirstMappedSheet;
	BOOL mIsFrameset;
	OIXMLDocument* mXhtmlDoc;
	OIXMLElement* mBodyElement;
	OIXMLDocument* mTabBarDoc;
	NSString* mTabBarURL;
	NSMutableArray* mSheetURLs;
	double mTabPosition;
	unsigned long long mNumberOfMappedSheets;
	BOOL mHasPushedHeader;
	BOOL mHasPushedFirstSheet;
	BOOL mLoadingMessageVisible;

}

@property (retain) NSString * fileName; 
@property (readonly) EDWorkbook * document; 
+(id)borderStyleCache;
+(id)borderWidthCache;
+(id)cssStyleCache;
-(id)archiver;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(id)documentTitle;
-(void)setElementCount:(unsigned long long)arg1 ;
-(id)blipAtIndex:(unsigned)arg1 ;
-(CGSize)pageSizeForDevice;
-(id)styleMatrix;
-(void)startMappingWithState:(id)arg1 ;
-(void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)finishMappingWithState:(id)arg1 ;
-(id)initWithDocument:(id)arg1 archiver:(id)arg2 ;
-(BOOL)hasMultipleSheets;
-(void)mapStylesheetData:(id)arg1 name:(id)arg2 atElement:(id)arg3 ;
-(id)headElementForFrontPage;
-(id)tabTitleDrawingAttributes;
-(void)mapStylesheetNamed:(id)arg1 atElement:(id)arg2 ;
-(id)copySheetMapperWithEdSheet:(id)arg1 ;
-(id)_copyStringForSheet:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 andMapper:(id)arg4 ;
-(id)_frontPageByCopyingMainPage;
-(void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_mainPageBack;
@end

