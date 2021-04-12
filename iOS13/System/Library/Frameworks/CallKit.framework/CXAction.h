/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CXActionDelegate>)delegate;
-(void)setDelegate:(id<CXActionDelegate>)arg1 ;
-(long long)state;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)isComplete;
-(long long)failureReason;
-(void)setFailureReason:(long long)arg1 ;
-(void)fulfill;
-(NSDate *)timeoutDate;
-(NSMutableString *)customDescription;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateAsFulfilled;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)commitDate;
-(void)updateAsFailedWithReason:(long long)arg1 ;
-(void)setCommitDate:(NSDate *)arg1 ;
-(id)sanitizedCopy;
-(void)fail;
@end

