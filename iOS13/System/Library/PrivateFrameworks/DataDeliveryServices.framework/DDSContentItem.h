/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@class DDSAsset, NSDictionary, NSURL;

@interface DDSContentItem : NSObject {

	DDSAsset* _parentAsset;
	NSDictionary* _contents;

}

@property (nonatomic,retain) DDSAsset * parentAsset;               //@synthesize parentAsset=_parentAsset - In the implementation block
@property (nonatomic,retain) NSDictionary * contents;              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSURL * path; 
-(id)init;
-(NSDictionary *)contents;
-(NSURL *)path;
-(void)setContents:(NSDictionary *)arg1 ;
-(id)initWithParentAsset:(id)arg1 contents:(id)arg2 ;
-(DDSAsset *)parentAsset;
-(void)setParentAsset:(DDSAsset *)arg1 ;
@end

