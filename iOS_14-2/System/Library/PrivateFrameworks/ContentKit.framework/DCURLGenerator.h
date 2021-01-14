/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSString;

@interface DCURLGenerator : NSObject

@property (nonatomic,readonly) NSString * scheme; 
@property (nonatomic,readonly) NSString * host; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * query; 
-(NSString *)query;
-(NSString *)scheme;
-(NSString *)host;
-(NSString *)path;
-(id)URL;
@end

