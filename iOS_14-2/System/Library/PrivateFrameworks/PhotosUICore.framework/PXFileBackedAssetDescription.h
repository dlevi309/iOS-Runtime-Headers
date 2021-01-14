/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableDictionary, NSURL;

@interface PXFileBackedAssetDescription : NSObject {

	NSMutableDictionary* _descriptionDictionary;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)simpleImageDescriptionWithURL:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSURL *)url;
-(id)description;
@end

