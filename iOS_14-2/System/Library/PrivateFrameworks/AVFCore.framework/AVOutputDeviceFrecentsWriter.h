/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputDeviceFrecentsWriting.h>

@class NSString, NSMutableDictionary;

@interface AVOutputDeviceFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting> {

	NSString* _frecentsFilePath;
	NSMutableDictionary* _frecents;

}

@property (nonatomic,readonly) long long numberOfKeysToBeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)numberOfKeysToBeSet;
-(void)setFrecencyInfo:(id)arg1 forDeviceID:(id)arg2 ;
-(BOOL)persistToDiskReturningError:(id*)arg1 ;
-(void)removeFrecencyInfoForDeviceID:(id)arg1 ;
-(id)initWithFrecentsFilePath:(id)arg1 ;
-(void)dealloc;
@end

