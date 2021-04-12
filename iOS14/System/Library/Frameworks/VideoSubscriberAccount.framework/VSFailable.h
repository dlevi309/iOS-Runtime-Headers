/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface VSFailable : NSObject <NSSecureCoding> {

	long long _kind;
	id _object;
	NSError* _error;

}

@property (assign,nonatomic) long long kind;              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSError * error;               //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)failableWithObject:(id)arg1 ;
+(id)failableWithError:(id)arg1 ;
+(id)decodableClasses;
-(id)initWithObject:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(long long)kind;
-(void)setObject:(id)arg1 ;
-(id)description;
-(void)unwrapObject:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)setKind:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

