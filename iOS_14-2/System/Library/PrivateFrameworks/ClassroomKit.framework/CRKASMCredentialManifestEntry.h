/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKDictionaryFormatable.h>

@class NSString, NSDateInterval;

@interface CRKASMCredentialManifestEntry : NSObject <CRKDictionaryFormatable> {

	NSString* _userIdentifier;
	NSDateInterval* _validityInterval;
	NSString* _fingerprint;

}

@property (nonatomic,copy,readonly) NSString * userIdentifier;                           //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) NSDateInterval * validityInterval;                        //@synthesize validityInterval=_validityInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * fingerprint;                              //@synthesize fingerprint=_fingerprint - In the implementation block
@property (getter=isFullyPopulated,nonatomic,readonly) BOOL fullyPopulated; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)validityIntervalWithDictionary:(id)arg1 ;
-(NSString *)fingerprint;
-(NSString *)userIdentifier;
-(id)init;
-(NSString *)stringValue;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryValue;
-(id)initWithUserIdentifier:(id)arg1 validityInterval:(id)arg2 fingerprint:(id)arg3 ;
-(BOOL)isFullyPopulated;
-(NSDateInterval *)validityInterval;
@end

