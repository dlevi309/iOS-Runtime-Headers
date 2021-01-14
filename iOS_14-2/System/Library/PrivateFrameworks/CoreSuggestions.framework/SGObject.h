/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, SGOrigin;

@interface SGObject : NSObject <NSCopying, NSSecureCoding> {

	SGRecordId* _recordId;
	SGOrigin* _origin;

}

@property (nonatomic,readonly) SGRecordId * recordId;              //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) SGOrigin * origin;                  //@synthesize origin=_origin - In the implementation block
+(BOOL)supportsSecureCoding;
-(SGRecordId *)recordId;
-(SGOrigin *)origin;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqualToSuggestion:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

