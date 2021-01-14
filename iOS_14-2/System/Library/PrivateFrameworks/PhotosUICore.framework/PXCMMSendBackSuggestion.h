/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSSet, NSArray, PHAssetCollection;

@interface PXCMMSendBackSuggestion : NSObject {

	NSSet* _participants;
	NSArray* _recipients;
	PHAssetCollection* _assetCollection;

}

@property (nonatomic,readonly) NSSet * participants;                             //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
+(id)new;
-(NSArray *)recipients;
-(id)init;
-(id)initWithAssetCollection:(id)arg1 participants:(id)arg2 ;
-(NSSet *)participants;
-(PHAssetCollection *)assetCollection;
@end

