/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, NSDate, NSUUID;

@interface HMISignpost : HMFObject <HMFLogging> {

	NSString* _name;
	NSDate* _beginDate;
	unsigned long long _signpostIdentifier;
	NSUUID* _identifier;

}

@property (readonly) NSDate * beginDate;                                 //@synthesize beginDate=_beginDate - In the implementation block
@property (readonly) unsigned long long signpostIdentifier;              //@synthesize signpostIdentifier=_signpostIdentifier - In the implementation block
@property (copy,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)end;
-(void)begin;
-(id)logIdentifier;
-(BOOL)hasBegun;
-(NSDate *)beginDate;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)signpostLog;
-(unsigned long long)signpostIdentifier;
-(NSUUID *)identifier;
-(id)initWithName:(id)arg1 deferred:(BOOL)arg2 ;
-(BOOL)shouldSignpost;
@end

