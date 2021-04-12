/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

@class NSString;


@protocol SASettingAppSettingCommand <SAAceSerializable,SAClientBoundCommand>
@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@required
-(NSString *)location;
-(void)setLocation:(id)arg1;
-(NSString *)appWithSettingsId;
-(void)setAppWithSettingsId:(id)arg1;

@end

