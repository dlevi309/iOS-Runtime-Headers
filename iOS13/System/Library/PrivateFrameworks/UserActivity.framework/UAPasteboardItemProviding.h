/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

@class NSUUID, NSString;


@protocol UAPasteboardItemProviding <NSObject>
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,copy) NSString * type; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSUUID *)uuid;
-(void)setUuid:(id)arg1;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1;

@end

