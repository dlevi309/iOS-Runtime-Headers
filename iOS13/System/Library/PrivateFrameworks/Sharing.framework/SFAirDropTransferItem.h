/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)count;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subtype;
-(void)incrementCount;
-(BOOL)isFile;
-(id)initWithType:(id)arg1 isFile:(BOOL)arg2 ;
-(id)initWithType:(id)arg1 subtype:(id)arg2 isFile:(BOOL)arg3 ;
@end

