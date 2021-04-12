/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface SYDictionaryObject : NSObject <SYObject, NSSecureCoding> {

	NSDictionary* _properties;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithProperties:(id)arg1 ;
-(NSDictionary *)properties;
-(void)encodeWithCoder:(id)arg1 ;
-(id)syncId;
-(id)initWithCoder:(id)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
@end

