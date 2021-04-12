/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol ATSessionServer <NSObject>
@required
-(void)fetchSessionsWithTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchActiveSessionCountForSessionTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2;

@end

