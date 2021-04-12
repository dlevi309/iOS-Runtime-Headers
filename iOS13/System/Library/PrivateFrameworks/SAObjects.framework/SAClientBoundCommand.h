/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

@class NSString, NSArray;


@protocol SAClientBoundCommand <SAAceCommand,SAAceReferable>
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@required
-(NSArray *)callbacks;
-(NSString *)appId;
-(void)setAppId:(id)arg1;
-(BOOL)requiresResponse;
-(void)setCallbacks:(id)arg1;

@end

