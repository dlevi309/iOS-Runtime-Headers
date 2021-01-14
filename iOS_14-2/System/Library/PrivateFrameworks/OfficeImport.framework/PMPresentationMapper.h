/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDocumentMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class NSMutableArray, NSString, OIXMLDocument, OIXMLElement, PDPresentation;

@interface PMPresentationMapper : CMDocumentMapper <CMMapperRoot> {

	int mWidth;
	NSMutableArray* mSlideNames;
	NSMutableArray* mSlideGuids;
	NSString* mResourceUrlPrefix;
	NSString* mResourceUrlProtocol;
	OIXMLDocument* mXhtmlDoc;
	OIXMLElement* mBodyElement;
	unsigned mNextCommit;
	unsigned mCurrentSlide;
	BOOL mHasPushedFirstSlides;

}

@property (readonly) PDPresentation * document; 
-(id)documentTitle;
-(id)blipAtIndex:(unsigned)arg1 ;
-(CGSize)pageSizeForDevice;
-(void)startMappingWithState:(id)arg1 ;
-(void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)finishMappingWithState:(id)arg1 ;
-(id)initWithDocument:(id)arg1 archiver:(id)arg2 ;
-(CGSize)slideSize;
-(CGSize)pageSizeForDeviceIncludingMargins:(BOOL)arg1 ;
-(void)setHtmlDocumentSizeInArchiver;
-(id)defaultStyleSheet;
-(void)_pushEmptySlideWithMessage:(id)arg1 ;
@end

