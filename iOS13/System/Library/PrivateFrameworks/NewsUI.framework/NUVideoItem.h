/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSURL, NSString, FCAssetHandle;


@protocol NUVideoItem <NFCopying>
@property (nonatomic,copy,readonly) NSURL * videoURL; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) id<NUAdContextProvider> adContextProvider; 
@property (nonatomic,copy,readonly) NSString * callToActionTitle; 
@property (nonatomic,copy,readonly) NSURL * callToActionURL; 
@property (nonatomic,readonly) FCAssetHandle * nameImageAssetHandle; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * sourceTagID; 
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds; 
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@required
-(NSString *)title;
-(NSString *)sourceName;
-(NSURL *)videoURL;
-(BOOL)isPaid;
-(NSString *)articleID;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isBoundToContext;
-(FCAssetHandle *)nameImageAssetHandle;
-(NSURL *)callToActionURL;
-(NSString *)sourceTagID;
-(id<NUAdContextProvider>)adContextProvider;
-(NSString *)callToActionTitle;

@end

