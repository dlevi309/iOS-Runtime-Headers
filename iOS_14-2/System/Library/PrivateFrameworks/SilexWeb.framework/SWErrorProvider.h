/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

@class NSError;


@protocol SWErrorProvider <NSObject>
@property (readonly,nonatomic) NSError * error; 
@property (copy,nonatomic) id block; 
@required
-(id)block;
-(NSError *)error;
-(void)onError:(/*^block*/id)arg1;

@end

