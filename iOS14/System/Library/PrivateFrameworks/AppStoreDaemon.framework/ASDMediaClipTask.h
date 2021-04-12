/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString, AMSProcessInfo, NSNumber;

@interface ASDMediaClipTask : AMSTask <AMSBagConsumer> {

	id<AMSBagProtocol> _bag;
	NSString* _clientID;
	NSString* _logKey;
	unsigned long long _signpostID;
	NSString* _bundleID;
	AMSProcessInfo* _clientInfo;
	NSNumber* _externalVersionID;

}

@property (nonatomic,retain) NSNumber * externalVersionID;              //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;               //@synthesize clientInfo=_clientInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(void)setBundleID:(NSString *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(NSNumber *)externalVersionID;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)perform;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
-(NSString *)bundleID;
-(id)_componentsPromise;
-(id)initWithClientID:(id)arg1 bag:(id)arg2 ;
@end

