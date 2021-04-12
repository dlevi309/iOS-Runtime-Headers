/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(AMSURLRequestProperties *)properties;
-(void)setProperties:(AMSURLRequestProperties *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
@end

