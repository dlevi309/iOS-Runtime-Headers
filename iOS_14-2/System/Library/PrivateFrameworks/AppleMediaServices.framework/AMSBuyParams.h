/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _backingDictionary;

}

@property (nonatomic,readonly) double price; 
@property (readonly) NSDictionary * dictionary; 
+(BOOL)supportsSecureCoding;
+(id)buyParamsWithString:(id)arg1 ;
-(void)clear;
-(double)price;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(id)stringValue;
-(id)description;
-(NSDictionary *)dictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)_parseBuyParams:(id)arg1 ;
-(id)_normalizedDictionary;
-(id)buyParametersForRequest;
-(void)importURLEncodedBuyParams:(id)arg1 ;
-(id)requestDataWithError:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

