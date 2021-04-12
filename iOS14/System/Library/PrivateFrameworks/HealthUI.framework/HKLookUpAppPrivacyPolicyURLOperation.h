/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <Foundation/NSOperation.h>

@class NSString, NSURL, NSError, AMSPromise;

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	NSString* _bundleIdentifier;
	NSURL* _privacyPolicyURL;
	NSError* _error;
	AMSPromise* _outstandingPromise;

}

@property (getter=isExecuting) BOOL executing; 
@property (getter=isFinished) BOOL finished; 
@property (copy) NSURL * privacyPolicyURL;                                    //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (copy) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (retain) AMSPromise * outstandingPromise;                           //@synthesize outstandingPromise=_outstandingPromise - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(void)setExecuting:(BOOL)arg1 ;
-(NSURL *)privacyPolicyURL;
-(id)description;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isExecuting;
-(void)cancel;
-(void)setPrivacyPolicyURL:(NSURL *)arg1 ;
-(AMSPromise *)outstandingPromise;
-(void)setOutstandingPromise:(AMSPromise *)arg1 ;
-(void)_performLookup;
@end

