/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

@class NSError, ICStoreDialogResponse;


@protocol ICStoreResponseProtocol <NSObject>
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@required
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;

@end

