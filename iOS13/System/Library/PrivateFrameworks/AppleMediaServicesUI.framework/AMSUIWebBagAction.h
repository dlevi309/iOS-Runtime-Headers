/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)profileVersion;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(NSArray *)requestedKeys;
-(void)_fetchValuesForKeys:(id)arg1 bag:(id)arg2 startingAtIndex:(long long)arg3 valuesArray:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setRequestedKeys:(NSArray *)arg1 ;
@end

