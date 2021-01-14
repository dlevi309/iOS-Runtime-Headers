/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKResourceLoadStatisticsFirstParty : NSObject <WKObject> {

	ObjectStorage<API::ResourceLoadStatisticsFirstParty> _firstParty;
	BOOL _thirdPartyStorageAccessGranted;

}

@property (nonatomic,readonly) NSString * firstPartyDomain; 
@property (nonatomic,readonly) BOOL thirdPartyStorageAccessGranted;              //@synthesize thirdPartyStorageAccessGranted=_thirdPartyStorageAccessGranted - In the implementation block
@property (nonatomic,readonly) double timeLastUpdated; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)firstPartyDomain;
-(BOOL)storageAccess;
-(double)timeLastUpdated;
-(BOOL)thirdPartyStorageAccessGranted;
-(Object*)_apiObject;
-(void)dealloc;
@end

