/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSString;

@interface DCURLGenerator : NSObject

@property (nonatomic,readonly) NSString * scheme; 
@property (nonatomic,readonly) NSString * host; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * query; 
-(NSString *)scheme;
-(NSString *)host;
-(NSString *)query;
-(NSString *)path;
-(id)URL;
@end

