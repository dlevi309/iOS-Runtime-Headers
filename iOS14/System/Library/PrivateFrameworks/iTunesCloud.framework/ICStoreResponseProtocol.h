/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

@class NSError, ICStoreDialogResponse;


@protocol ICStoreResponseProtocol <NSObject>
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@required
-(ICStoreDialogResponse *)dialog;
-(NSError *)serverError;

@end

