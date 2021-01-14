/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CXActionDelegate;
@class NSUUID, NSDate, NSMutableString, NSString;

@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	long long _state;
	long long _failureReason;
	NSDate* _commitDate;
	id<CXActionDelegate> _delegate;

}

@property (nonatomic,copy) NSUUID * UUID;                                             //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long failureReason;                                 //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,copy,readonly) NSMutableString * customDescription; 
@property (nonatomic,retain) NSDate * commitDate;                                     //@synthesize commitDate=_commitDate - In the implementation block
@property (assign,nonatomic,__weak) id<CXActionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,readonly) NSDate * timeoutDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(double)timeout;
-(BOOL)isComplete;
-(NSUUID *)UUID;
-(long long)failureReason;
-(void)fail;
-(id)init;
-(id<CXActionDelegate>)delegate;
-(NSMutableString *)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)fulfill;
-(void)setDelegate:(id<CXActionDelegate>)arg1 ;
-(NSString *)description;
-(void)setFailureReason:(long long)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateAsFulfilled;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)commitDate;
-(void)updateAsFailedWithReason:(long long)arg1 ;
-(void)setCommitDate:(NSDate *)arg1 ;
-(id)sanitizedCopy;
-(NSDate *)timeoutDate;
@end

