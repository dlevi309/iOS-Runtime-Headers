/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class NSArray;


@protocol NSItemProviderWriting <NSObject>
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@optional
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
-(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
-(NSArray *)writableTypeIdentifiersForItemProvider;

@required
+(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2;

@end

