/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDFormField : WDRun {

	unsigned mPosition;
	BOOL mLinkAbsolute;
	BOOL mLinkSpecifyingNamedLocation;
	NSString* mNamedLocation;
	NSString* mURI;
	NSString* mMacName;
	NSString* mDosName;

}
-(id)description;
-(unsigned)position;
-(id)namedLocation;
-(void)setPosition:(unsigned)arg1 ;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)setNamedLocation:(id)arg1 ;
-(int)runType;
-(BOOL)linkAbsolute;
-(void)setLinkAbsolute:(BOOL)arg1 ;
-(BOOL)linkSpecifyingNamedLocation;
-(void)setLinkSpecifyingNamedLocation:(BOOL)arg1 ;
-(id)macName;
-(void)setMacName:(id)arg1 ;
-(id)dosName;
-(void)setDosName:(id)arg1 ;
@end

