/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class NSString;


@protocol VUIJSMediaEntityTypeExport <JSExport>
@property (nonatomic,readonly) NSString * subtype; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * collectionType; 
@required
+(id)show;
+(id)movie;
+(id)season;
+(id)episode;
+(id)rental;
+(id)homeVideo;
-(NSString *)category;
-(NSString *)subtype;
-(NSString *)collectionType;

@end

