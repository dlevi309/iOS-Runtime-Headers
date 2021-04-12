/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

@class NSUUID, NSString;


@protocol UAPasteboardItemProviding <NSObject>
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,copy) NSString * type; 
@required
-(NSUUID *)uuid;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1;
-(void)setUuid:(id)arg1;

@end

