/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface TCFontName : NSObject {

	NSString* _styleName;
	NSString* _fullName;

}

@property (nonatomic,readonly) NSString * styleName;              //@synthesize styleName=_styleName - In the implementation block
@property (nonatomic,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
-(NSString *)fullName;
-(NSString *)styleName;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithStyleName:(id)arg1 fullName:(id)arg2 ;
-(id)equivalentDictionary;
@end

