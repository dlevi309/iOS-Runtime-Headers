/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/LSPlugInQuery.h>

@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery {

	NSURL* _bundleURL;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_bundleURL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

