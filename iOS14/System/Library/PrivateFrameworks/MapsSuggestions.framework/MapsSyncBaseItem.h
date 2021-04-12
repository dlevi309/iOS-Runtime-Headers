/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

@class NSUUID, NSDate;


@protocol MapsSyncBaseItem <NSObject>
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@required
-(NSDate *)createTime;
-(NSUUID *)identifier;

@end

