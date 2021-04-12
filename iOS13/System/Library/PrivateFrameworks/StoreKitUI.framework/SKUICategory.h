/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIArtworkProviding;
@class NSArray, NSString, NSURL;

@interface SKUICategory : NSObject {

	long long _categoryIdentifier;
	NSArray* _children;
	NSString* _name;
	NSString* _parentLabel;
	NSURL* _url;
	id<SKUIArtworkProviding> _artworkProvider;

}

@property (nonatomic,readonly) id<SKUIArtworkProviding> artworkProvider;              //@synthesize artworkProvider=_artworkProvider - In the implementation block
@property (nonatomic,readonly) long long categoryIdentifier;                          //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * children;                                    //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * parentLabel;                                //@synthesize parentLabel=_parentLabel - In the implementation block
-(NSString *)name;
-(NSURL *)URL;
-(NSArray *)children;
-(long long)categoryIdentifier;
-(BOOL)containsURL:(id)arg1 ;
-(id<SKUIArtworkProviding>)artworkProvider;
-(id)initWithCategoryDictionary:(id)arg1 ;
-(id)subcategoryContainingURL:(id)arg1 ;
-(NSString *)parentLabel;
@end

