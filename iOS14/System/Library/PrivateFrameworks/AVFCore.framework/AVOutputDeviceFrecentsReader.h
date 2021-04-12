/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputDeviceFrecentsReading.h>

@class NSArray, NSString, NSMutableDictionary;

@interface AVOutputDeviceFrecentsReader : NSObject <AVOutputDeviceFrecentsReading> {

	NSString* _frecentsFilePath;
	NSMutableDictionary* _frecents;

}

@property (nonatomic,readonly) NSArray * deviceIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)frecencyInfoForDeviceWithID:(id)arg1 ;
-(id)init;
-(id)initWithFrecentsFilePath:(id)arg1 error:(id*)arg2 ;
-(NSArray *)deviceIDs;
-(void)dealloc;
@end

