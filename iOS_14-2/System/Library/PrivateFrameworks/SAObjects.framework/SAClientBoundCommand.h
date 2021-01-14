/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

@class NSString, NSArray;


@protocol SAClientBoundCommand <SAAceCommand,SAAceReferable>
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@required
-(NSString *)appId;
-(BOOL)requiresResponse;
-(NSArray *)callbacks;
-(void)setCallbacks:(id)arg1;
-(void)setAppId:(id)arg1;

@end

