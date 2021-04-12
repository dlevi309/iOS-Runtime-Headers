/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@class DDSAsset, NSDictionary, NSURL, NSString;

@interface DDSContentItem : NSObject {

	DDSAsset* _parentAsset;
	NSDictionary* _contents;

}

@property (nonatomic,retain) DDSAsset * parentAsset;               //@synthesize parentAsset=_parentAsset - In the implementation block
@property (nonatomic,retain) NSDictionary * contents;              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSURL * path; 
@property (nonatomic,readonly) NSDictionary * region; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSString * locale; 
-(NSDictionary *)contents;
-(NSDictionary *)region;
-(NSString *)locale;
-(id)init;
-(NSURL *)path;
-(NSString *)fileName;
-(id)description;
-(NSString *)type;
-(void)setContents:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithParentAsset:(id)arg1 contents:(id)arg2 ;
-(DDSAsset *)parentAsset;
-(BOOL)isEqualToContentItem:(id)arg1 ;
-(void)setParentAsset:(DDSAsset *)arg1 ;
@end

