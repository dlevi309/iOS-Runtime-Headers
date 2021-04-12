/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SGOrigin *)origin;
-(SGRecordId *)recordId;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 ;
-(BOOL)isEqualToSuggestion:(id)arg1 ;
@end

