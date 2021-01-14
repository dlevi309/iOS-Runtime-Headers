/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FMFHandle, NSSet, NSDate, NSString;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding> {

	long long _requestType;
	FMFHandle* _fromHandle;
	NSSet* _toHandles;
	NSDate* _endDate;
	NSString* _groupId;
	NSString* _requestId;

}

@property (nonatomic,retain) NSString * requestId;                //@synthesize requestId=_requestId - In the implementation block
@property (assign,nonatomic) long long requestType;               //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,retain) FMFHandle * fromHandle;              //@synthesize fromHandle=_fromHandle - In the implementation block
@property (nonatomic,retain) NSSet * toHandles;                   //@synthesize toHandles=_toHandles - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                    //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSString * groupId;                  //@synthesize groupId=_groupId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(long long)arg3 groupId:(id)arg4 withEndDate:(id)arg5 ;
-(NSDate *)endDate;
-(void)setRequestType:(long long)arg1 ;
-(long long)requestType;
-(NSString *)groupId;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(id)description;
-(void)setGroupId:(NSString *)arg1 ;
-(NSString *)requestId;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FMFHandle *)fromHandle;
-(void)setFromHandle:(FMFHandle *)arg1 ;
-(void)setToHandles:(NSSet *)arg1 ;
-(NSSet *)toHandles;
-(id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(long long)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6 ;
@end

