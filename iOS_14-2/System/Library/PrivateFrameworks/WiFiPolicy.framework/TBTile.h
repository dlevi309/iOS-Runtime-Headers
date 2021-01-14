/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSDate, NSString;


@protocol TBTile <NSObject>
@property (nonatomic,readonly) unsigned long long key; 
@property (nonatomic,copy,readonly) NSDate * created; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,readonly) unsigned long long networkCount; 
@optional
-(NSString *)etag;
-(NSDate *)created;
-(void)setEtag:(id)arg1;
-(unsigned long long)networkCount;

@required
-(unsigned long long)key;

@end

