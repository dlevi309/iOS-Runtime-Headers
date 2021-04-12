/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface OADOle : NSObject {

	BOOL mIconic;
	NSString* mCLSID;
	NSString* mAnsiUserType;
	NSString* mAnsiClipboardFormatName;
	unsigned mWinClipboardFormat;
	NSString* mMacClipboardFormat;
	NSString* mAnsiProgID;
	NSString* mUnicodeUserType;
	NSString* mUnicodeClipboardFormatName;
	NSString* mUnicodeProgID;
	id mObject;

}
+(BOOL)isProgIDChart:(id)arg1 ;
+(BOOL)isProgIDMathType:(id)arg1 ;
+(BOOL)isCLSIDSupported:(id)arg1 ;
-(id)init;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(BOOL)iconic;
-(void)setIconic:(BOOL)arg1 ;
-(id)CLSID;
-(void)setCLSID:(id)arg1 ;
-(id)ansiUserType;
-(void)setAnsiUserType:(id)arg1 ;
-(id)ansiClipboardFormatName;
-(void)setAnsiClipboardFormatName:(id)arg1 ;
-(unsigned)winClipboardFormat;
-(void)setWinClipboardFormat:(unsigned)arg1 ;
-(id)macClipboardFormat;
-(void)setMacClipboardFormat:(id)arg1 ;
-(id)ansiProgID;
-(void)setAnsiProgID:(id)arg1 ;
-(id)unicodeUserType;
-(void)setUnicodeUserType:(id)arg1 ;
-(id)unicodeClipboardFormatName;
-(void)setUnicodeClipboardFormatName:(id)arg1 ;
-(id)unicodeProgID;
-(void)setUnicodeProgID:(id)arg1 ;
@end

