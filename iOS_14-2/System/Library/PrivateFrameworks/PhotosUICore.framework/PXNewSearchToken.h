/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, UIImage, NSAttributedString, PSIQueryToken;

@interface PXNewSearchToken : NSObject {

	NSString* _identifier;
	UIImage* _icon;
	NSAttributedString* _attributedTitle;
	unsigned long long _count;
	PSIQueryToken* _queryToken;
	NSString* _priorityAssetUUID;

}

@property (nonatomic,readonly) BOOL isPersistable; 
@property (nonatomic,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                    //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                          //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) PSIQueryToken * queryToken;                        //@synthesize queryToken=_queryToken - In the implementation block
@property (nonatomic,readonly) NSString * priorityAssetUUID;                      //@synthesize priorityAssetUUID=_priorityAssetUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasLeadingHashtag; 
+(id)pu_searchTokenFromZeroKeyword:(id)arg1 ;
+(id)unnamedPersonDisplayText;
+(id)socialGroupDisplayText;
+(id)px_searchTokenForHashtag:(id)arg1 ;
+(id)px_oneYearAgoSearchToken;
+(id)px_searchTokensFromSiriSearchRequest:(id)arg1 ;
-(NSAttributedString *)attributedTitle;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)priorityAssetUUID;
-(id)init;
-(UIImage *)icon;
-(unsigned long long)count;
-(id)description;
-(id)initWithTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithAttributedTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3 ;
-(BOOL)hasLeadingHashtag;
-(BOOL)isUnnamedPerson;
-(BOOL)isSocialGroup;
-(BOOL)isEqualToToken:(id)arg1 ;
-(id)_iconForSearchUserCategory:(unsigned long long)arg1 ;
-(id)_imagewithSymbolName:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isPersistable;
-(PSIQueryToken *)queryToken;
-(BOOL)isEqual:(id)arg1 ;
@end

