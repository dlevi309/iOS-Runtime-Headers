/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PSIIndexToken : NSObject {

	short _category;
	short _owningCategory;
	NSString* _text;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) short category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) short owningCategory;                    //@synthesize owningCategory=_owningCategory - In the implementation block
-(short)category;
-(id)description;
-(NSString *)text;
-(short)owningCategory;
-(NSString *)identifier;
-(id)initWithText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4 ;
@end

