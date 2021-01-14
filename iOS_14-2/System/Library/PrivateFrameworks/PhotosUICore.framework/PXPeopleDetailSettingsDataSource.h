/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXPeopleDetailSettingsDataSource <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) BOOL hasMoreDetails; 
@property (nonatomic,readonly) long long action; 
@optional
-(id)personNameAtIndex:(long long)arg1;
-(unsigned long long)faceCount:(long long)arg1;
-(long long)verifyTypeAtIndex:(long long)arg1;
-(id)modelObjectForIndex:(long long)arg1;

@required
-(unsigned long long)numberOfItems;
-(void)setTitle:(id)arg1;
-(long long)action;
-(void)imageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(BOOL)hasMoreDetails;
-(NSString *)title;

@end

