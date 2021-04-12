/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol ATSessionServer <NSObject>
@required
-(void)fetchActiveSessionCountForSessionTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSessionsWithTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

