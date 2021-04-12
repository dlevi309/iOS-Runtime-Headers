/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _backingDictionary;

}

@property (readonly) NSDictionary * dictionary; 
+(BOOL)supportsSecureCoding;
+(id)buyParamsWithString:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithString:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)_parseBuyParams:(id)arg1 ;
-(void)importURLEncodedBuyParams:(id)arg1 ;
@end

