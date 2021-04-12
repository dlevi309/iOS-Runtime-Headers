/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSArray, NSString;

@interface TUCallGroup : NSObject {

	NSArray* _calls;

}

@property (nonatomic,copy,readonly) NSArray * calls;                     //@synthesize calls=_calls - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,copy,readonly) NSString * displayName; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(int)status;
-(NSString *)displayName;
-(NSArray *)calls;
-(id)initWithCalls:(id)arg1 ;
-(id)initWithCall:(id)arg1 ;
-(BOOL)isEqualToCallGroup:(id)arg1 ;
@end

