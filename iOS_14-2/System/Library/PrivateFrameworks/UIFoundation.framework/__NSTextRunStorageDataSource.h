/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@protocol __NSTextRunStorageDataSource <NSObject>
@property (getter=isCountableDataSource,readonly) BOOL countableDataSource; 
@property (readonly) id<NSTextLocation> baseLocation; 
@optional
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2;
-(id<NSTextLocation>)baseLocation;

@required
-(BOOL)isCountableDataSource;

@end

