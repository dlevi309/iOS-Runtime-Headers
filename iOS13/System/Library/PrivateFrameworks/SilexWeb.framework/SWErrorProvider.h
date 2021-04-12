/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

@class NSError;


@protocol SWErrorProvider <NSObject>
@property (readonly,nonatomic) NSError * error; 
@property (copy,nonatomic) id block; 
@required
-(NSError *)error;
-(id)block;
-(void)onError:(/*^block*/id)arg1;

@end

