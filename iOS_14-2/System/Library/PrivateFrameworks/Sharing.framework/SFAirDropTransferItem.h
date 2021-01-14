/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding> {

	BOOL _isFile;
	NSString* _type;
	NSString* _subtype;
	long long _count;

}

@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtype;              //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL isFile;                          //@synthesize isFile=_isFile - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subtype;
-(id)init;
-(BOOL)isFile;
-(void)incrementCount;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)description;
-(id)initWithType:(id)arg1 isFile:(BOOL)arg2 ;
-(id)initWithType:(id)arg1 subtype:(id)arg2 isFile:(BOOL)arg3 ;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

