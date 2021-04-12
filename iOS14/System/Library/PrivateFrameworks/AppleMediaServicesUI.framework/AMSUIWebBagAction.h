/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSUIWebClientContext, NSString, NSArray;

@interface AMSUIWebBagAction : NSObject <AMSUIWebActionRunnable> {

	AMSUIWebClientContext* _context;
	NSString* _profile;
	NSString* _profileVersion;
	NSArray* _requestedKeys;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * profile;                           //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                    //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,retain) NSArray * requestedKeys;                      //@synthesize requestedKeys=_requestedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(NSString *)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(AMSUIWebClientContext *)context;
-(NSString *)profile;
-(NSString *)profileVersion;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(NSArray *)requestedKeys;
-(void)_fetchValuesForKeys:(id)arg1 bag:(id)arg2 startingAtIndex:(long long)arg3 valuesArray:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setRequestedKeys:(NSArray *)arg1 ;
@end

