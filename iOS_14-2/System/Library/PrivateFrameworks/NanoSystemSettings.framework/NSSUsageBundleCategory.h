/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSSUsageBundleCategory : NSObject <NSSecureCoding> {

	NSString* _name;
	unsigned long long _size;

}

@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

