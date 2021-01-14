/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSBatchDeleteRequestEncodingToken : NSObject <NSSecureCoding> {

	NSData* _fetchData;
	long long _resultType;
	BOOL _secure;

}

@property (nonatomic,retain,readonly) NSData * fetchData;              //@synthesize fetchData=_fetchData - In the implementation block
@property (nonatomic,readonly) long long resultType;                   //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL secure;                            //@synthesize secure=_secure - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)secure;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)resultType;
-(NSData *)fetchData;
-(id)initWithCoder:(id)arg1 ;
-(id)initForRequest:(id)arg1 ;
-(void)dealloc;
@end

