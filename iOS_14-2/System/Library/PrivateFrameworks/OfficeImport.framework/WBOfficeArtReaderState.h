/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OABReaderState.h>

@class WBReader, WXReadState;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;
	WXReadState* mXmlDocumentState;

}

@property (assign,nonatomic,__weak) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(WBReader *)reader;
-(void)setReader:(WBReader *)arg1 ;
-(id)initWithClient:(Class)arg1 ;
-(id)xmlDrawingState;
-(void)setCurrentTextType:(int)arg1 ;
-(int)currentTextType;
@end

