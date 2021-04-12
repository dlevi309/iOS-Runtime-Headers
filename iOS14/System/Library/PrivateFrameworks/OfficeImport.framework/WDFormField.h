/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)position;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)description;
-(void)setPosition:(unsigned)arg1 ;
-(id)namedLocation;
-(int)runType;
-(void)setNamedLocation:(id)arg1 ;
-(id)macName;
-(id)dosName;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)linkAbsolute;
-(void)setLinkAbsolute:(BOOL)arg1 ;
-(BOOL)linkSpecifyingNamedLocation;
-(void)setLinkSpecifyingNamedLocation:(BOOL)arg1 ;
-(void)setMacName:(id)arg1 ;
-(void)setDosName:(id)arg1 ;
@end

