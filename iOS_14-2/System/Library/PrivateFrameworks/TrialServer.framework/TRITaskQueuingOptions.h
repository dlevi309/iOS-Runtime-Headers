/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _duplicateTaskResolution;

}

@property (nonatomic,readonly) unsigned long long duplicateTaskResolution;              //@synthesize duplicateTaskResolution=_duplicateTaskResolution - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)optionsWithDuplicateTaskResolution:(unsigned long long)arg1 ;
+(id)defaultOptionsWithIgnoreDuplicates;
-(id)init;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDuplicateTaskResolution:(unsigned long long)arg1 ;
-(unsigned long long)duplicateTaskResolution;
-(id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end

