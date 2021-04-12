/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)CLSID;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)description;
-(BOOL)iconic;
-(void)setIconic:(BOOL)arg1 ;
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

