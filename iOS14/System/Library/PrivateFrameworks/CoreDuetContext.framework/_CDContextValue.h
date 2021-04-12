/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDate;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _metadata;

}

@property (nonatomic,retain) NSMutableDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSObject*<NSCopying>*<NSSecureCoding> value; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
+(BOOL)supportsSecureCoding;
+(id)supportedContextValueClasses;
-(id)init;
-(NSDate *)lastModifiedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)setValue:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(id)description;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

