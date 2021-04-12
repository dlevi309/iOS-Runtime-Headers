/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface PBFontEntity : NSObject {

	NSString* mFaceName;
	int mCharSet;
	int mType;
	int mFamily;

}
-(int)family;
-(int)type;
-(int)charSet;
-(id)faceName;
-(id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4 ;
@end

