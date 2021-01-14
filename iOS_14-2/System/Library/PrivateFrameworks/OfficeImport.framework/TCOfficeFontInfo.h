/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isBold;
-(NSString *)fullName;
-(id)description;
-(BOOL)isItalic;
-(id)initWithFullName:(id)arg1 isBold:(BOOL)arg2 isItalic:(BOOL)arg3 ;
-(id)officeName;
@end

