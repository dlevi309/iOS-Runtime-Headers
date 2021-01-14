/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString, NSNumber, NSURL;

@interface SSVContentLink : NSObject {

	NSString* _categoryName;
	long long _contentKind;
	NSNumber* _itemIdentifier;
	NSString* _itemTitle;
	NSString* _providerName;
	NSString* _searchTerm;
	long long _targetApplication;

}

@property (nonatomic,copy) NSString * categoryName;                    //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;                  //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemTitle;                       //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,copy) NSString * providerName;                    //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                      //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) long long contentKind;                    //@synthesize contentKind=_contentKind - In the implementation block
@property (assign,nonatomic) long long targetApplication;              //@synthesize targetApplication=_targetApplication - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSNumber *)itemIdentifier;
-(long long)targetApplication;
-(long long)contentKind;
-(long long)_targetApplicationWithContentKind:(long long)arg1 ;
-(id)_URLSchemeWithApplication:(long long)arg1 ;
-(id)_stringForContentKind:(long long)arg1 ;
-(void)setContentKind:(long long)arg1 ;
-(void)setItemTitle:(NSString *)arg1 ;
-(void)setTargetApplication:(long long)arg1 ;
-(NSString *)searchTerm;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)itemTitle;
-(NSURL *)URL;
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(NSString *)providerName;
@end

