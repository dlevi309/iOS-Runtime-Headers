/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSString;


@protocol CRKOutputDevice
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(void)displayToDeviceWithPassword:(id)arg1 suppressPrompt:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

