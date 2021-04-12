/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)decodableClasses;
+(id)failableWithError:(id)arg1 ;
+(id)failableWithObject:(id)arg1 ;
-(id)init;
-(id)description;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)unwrapObject:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
@end

