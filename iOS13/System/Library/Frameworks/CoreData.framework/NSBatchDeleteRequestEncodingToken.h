/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)resultType;
-(id)initForRequest:(id)arg1 ;
-(BOOL)secure;
-(NSData *)fetchData;
@end

