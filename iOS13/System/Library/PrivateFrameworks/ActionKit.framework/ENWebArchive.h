/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)data;
-(id)propertyList;
-(NSArray *)subresources;
-(id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3 ;
-(ENWebResource *)mainResource;
-(NSArray *)subframeArchives;
-(void)setMainResource:(ENWebResource *)arg1 ;
-(void)setSubresources:(NSArray *)arg1 ;
-(void)setSubframeArchives:(NSArray *)arg1 ;
@end

