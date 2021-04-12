/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <CFNetwork/NSMutableURLRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying> {

	AMSURLRequestProperties* _properties;

}

@property (nonatomic,retain) AMSURLRequestProperties * properties;              //@synthesize properties=_properties - In the implementation block
-(AMSURLRequestProperties *)properties;
-(id)initWithRequest:(id)arg1 bag:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)setProperties:(AMSURLRequestProperties *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

