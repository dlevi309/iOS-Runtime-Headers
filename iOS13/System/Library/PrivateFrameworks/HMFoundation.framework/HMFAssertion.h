/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging> {

	BOOL _valid;
	NSString* _name;

}

@property (getter=isValid) BOOL valid;                               //@synthesize valid=_valid - In the implementation block
@property (copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * uniqueDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleIdentifier;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(id)logIdentifier;
-(NSString *)uniqueDescription;
-(void)mark;
@end

