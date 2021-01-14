/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@class HMHomeManager, IDSService, NSString;

@interface HomeKitAgent : NSObject <HMHomeManagerDelegate> {

	HMHomeManager* _homeManager;
	BOOL _didUpdateHomes;
	IDSService* _idsService;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_loadHomeKit;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)initWithIDSService:(id)arg1 ;
-(void)dealloc;
-(void)fetchResidentDevicesIDSIdentifiersWithReply:(/*^block*/id)arg1 ;
-(void)_replyWithResidentDevicesIDSIdentifiers:(/*^block*/id)arg1 ;
@end

