/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSItemProvider, NSString;

@interface PHPickerResult : NSObject {

	NSItemProvider* _itemProvider;
	NSString* _assetIdentifier;

}

@property (nonatomic,readonly) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,readonly) NSString * assetIdentifier;                 //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
-(id)init;
-(NSItemProvider *)itemProvider;
-(unsigned long long)hash;
-(id)_initWithItemProvider:(id)arg1 assetIdentifier:(id)arg2 ;
-(NSString *)assetIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

