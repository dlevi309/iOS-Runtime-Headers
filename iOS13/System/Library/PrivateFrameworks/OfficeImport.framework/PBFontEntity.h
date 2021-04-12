/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface PBFontEntity : NSObject {

	NSString* mFaceName;
	int mCharSet;
	int mType;
	int mFamily;

}
-(int)type;
-(int)family;
-(id)faceName;
-(int)charSet;
-(id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4 ;
@end

