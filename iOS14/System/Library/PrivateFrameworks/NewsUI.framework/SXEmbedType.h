/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSURL, NSString;


@protocol SXEmbedType <NSObject>
@property (nonatomic,readonly) double minimumWidth; 
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * enclosingHTML; 
@property (nonatomic,readonly) NSString * bodyHTML; 
@property (nonatomic,readonly) NSString * javaScript; 
@property (nonatomic,readonly) unsigned long long autoPlayMedia; 
@required
-(double)maximumWidth;
-(double)minimumWidth;
-(NSURL *)baseURL;
-(NSString *)bodyHTML;
-(NSString *)javaScript;
-(NSString *)enclosingHTML;
-(unsigned long long)autoPlayMedia;

@end

