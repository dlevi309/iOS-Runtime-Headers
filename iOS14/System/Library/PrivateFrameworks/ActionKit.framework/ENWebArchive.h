/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class ENWebResource, NSArray;

@interface ENWebArchive : NSObject {

	ENWebResource* _mainResource;
	NSArray* _subresources;
	NSArray* _subframeArchives;

}

@property (nonatomic,retain) ENWebResource * mainResource;              //@synthesize mainResource=_mainResource - In the implementation block
@property (nonatomic,retain) NSArray * subresources;                    //@synthesize subresources=_subresources - In the implementation block
@property (nonatomic,retain) NSArray * subframeArchives;                //@synthesize subframeArchives=_subframeArchives - In the implementation block
+(id)webArchiveWithData:(id)arg1 ;
+(id)webArchiveWithDictionary:(id)arg1 ;
-(id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3 ;
-(id)data;
-(id)propertyList;
-(NSArray *)subresources;
-(ENWebResource *)mainResource;
-(NSArray *)subframeArchives;
-(void)setMainResource:(ENWebResource *)arg1 ;
-(void)setSubresources:(NSArray *)arg1 ;
-(void)setSubframeArchives:(NSArray *)arg1 ;
@end

