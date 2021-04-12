/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDocumentMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class NSString, WDDocument;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {

	NSString* mFileName;

}

@property (readonly) WDDocument * document; 
-(double)topMargin;
-(double)rightMargin;
-(id)fileName;
-(void)setFileName:(id)arg1 ;
-(id)archiver;
-(id)documentTitle;
-(double)bottomMargin;
-(double)leftMargin;
-(id)blipAtIndex:(unsigned)arg1 ;
-(int)defaultTabWidth;
-(CGSize)pageSizeForDevice;
-(CGSize)contentSizeForDevice;
-(double)headerMargin;
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(BOOL)hasSessionBreakAtIndex:(unsigned long long)arg1 ;
-(id)styleMatrix;
-(void)mapWithState:(id)arg1 ;
@end

