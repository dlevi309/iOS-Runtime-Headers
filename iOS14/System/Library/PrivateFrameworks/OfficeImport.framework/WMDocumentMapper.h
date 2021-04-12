/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)archiver;
-(void)setFileName:(id)arg1 ;
-(double)leftMargin;
-(id)fileName;
-(id)documentTitle;
-(double)topMargin;
-(double)bottomMargin;
-(double)rightMargin;
-(double)headerMargin;
-(id)blipAtIndex:(unsigned)arg1 ;
-(int)defaultTabWidth;
-(CGSize)pageSizeForDevice;
-(CGSize)contentSizeForDevice;
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(BOOL)hasSessionBreakAtIndex:(unsigned long long)arg1 ;
-(id)styleMatrix;
-(void)mapWithState:(id)arg1 ;
@end

