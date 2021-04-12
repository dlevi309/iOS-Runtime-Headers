/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIAccessing.h>

@class NSMutableDictionary, NSString;

@interface OZFxPlugAPIManager : NSObject <PROAPIAccessing> {

	NSMutableDictionary* _apis;
	PCRecursiveMutex* _mutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned)arg3 ;
-(id)apiForProtocol:(id)arg1 ;
-(void)unregisterAPIForProtocol:(id)arg1 ;
@end

