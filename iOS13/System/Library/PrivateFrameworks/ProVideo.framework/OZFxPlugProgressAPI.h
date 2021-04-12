/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
-(BOOL)userHasCancelled;
-(void)_setControl:(const OZProcessControl*)arg1 ;
@end

