/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

@class NSURL, NSString;


@protocol SXEmbedType <NSObject>
@property (nonatomic,readonly) double minimumWidth; 
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * enclosingHTML; 
@property (nonatomic,readonly) NSString * javaScript; 
@property (nonatomic,readonly) unsigned long long autoPlayMedia; 
@required
-(NSURL *)baseURL;
-(double)maximumWidth;
-(double)minimumWidth;
-(NSString *)enclosingHTML;
-(NSString *)javaScript;
-(unsigned long long)autoPlayMedia;

@end

