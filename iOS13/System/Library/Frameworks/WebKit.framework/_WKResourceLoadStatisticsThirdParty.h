/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, NSArray;

@interface _WKResourceLoadStatisticsThirdParty : NSObject <WKObject> {

	ObjectStorage<API::ResourceLoadStatisticsThirdParty> _thirdParty;

}

@property (nonatomic,readonly) NSString * thirdPartyDomain; 
@property (nonatomic,readonly) NSArray * underFirstParties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(Object*)_apiObject;
-(NSString *)thirdPartyDomain;
-(NSArray *)underFirstParties;
@end

