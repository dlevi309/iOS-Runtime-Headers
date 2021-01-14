/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <HealthRecordServices/HealthRecordServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKFHIRIdentifier, NSURL, NSDate;

@interface HDFHIRResourceLastSeenObject : NSObject <NSCopying, NSSecureCoding> {

	HKFHIRIdentifier* _resourceIdentifier;
	NSURL* _sourceURL;
	NSDate* _lastSeenDate;

}

@property (nonatomic,copy,readonly) HKFHIRIdentifier * resourceIdentifier;              //@synthesize resourceIdentifier=_resourceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastSeenDate;                              //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)sourceURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastSeenDate;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKFHIRIdentifier *)resourceIdentifier;
-(id)initWithResourceIdentifier:(id)arg1 sourceURL:(id)arg2 lastSeenDate:(id)arg3 ;
@end

