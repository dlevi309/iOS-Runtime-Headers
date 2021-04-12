/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class NSArray;


@protocol NSItemProviderWriting <NSObject>
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@optional
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;

@required
+(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2;

@end

