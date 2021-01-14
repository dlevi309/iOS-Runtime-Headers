/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging> {

	BOOL _valid;
	NSString* _name;

}

@property (copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * uniqueDescription; 
@property (getter=isValid,readonly) BOOL valid;                      //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)bundleIdentifier;
-(id)init;
-(BOOL)acquire:(id*)arg1 ;
-(id)logIdentifier;
-(void)mark;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)uniqueDescription;
-(BOOL)isValid;
-(void)invalidate;
-(void)dealloc;
@end

