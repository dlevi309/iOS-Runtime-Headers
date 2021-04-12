/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface TCFontName : NSObject {

	NSString* _styleName;
	NSString* _fullName;

}

@property (nonatomic,readonly) NSString * styleName;              //@synthesize styleName=_styleName - In the implementation block
@property (nonatomic,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fullName;
-(NSString *)styleName;
-(id)initWithStyleName:(id)arg1 fullName:(id)arg2 ;
-(id)equivalentDictionary;
@end

