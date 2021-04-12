/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface TCOfficeFontInfo : NSObject {

	BOOL _isBold;
	BOOL _isItalic;
	NSString* _fullName;

}

@property (nonatomic,readonly) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) BOOL isBold;                      //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) BOOL isItalic;                    //@synthesize isItalic=_isItalic - In the implementation block
+(id)officeFontInfoWithFullName:(id)arg1 isBold:(BOOL)arg2 isItalic:(BOOL)arg3 ;
-(id)description;
-(NSString *)fullName;
-(BOOL)isBold;
-(BOOL)isItalic;
-(id)initWithFullName:(id)arg1 isBold:(BOOL)arg2 isItalic:(BOOL)arg3 ;
-(id)officeName;
@end

