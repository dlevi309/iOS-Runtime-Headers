/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxProgressAPI.h>
#import <libobjc.A.dylib/PROAPIObject.h>

@class NSString;

@interface OZFxPlugProgressAPI : NSObject <FxProgressAPI, PROAPIObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProgressAPI;
+(void)releaseSharedProgressAPI;
-(id)init;
-(BOOL)updateProgress:(float)arg1 ;
-(BOOL)userHasCancelled;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
-(void)_setControl:(const OZProcessControl*)arg1 ;
@end

