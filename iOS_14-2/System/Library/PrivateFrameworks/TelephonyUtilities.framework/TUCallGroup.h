/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSArray, NSString;

@interface TUCallGroup : NSObject {

	NSArray* _calls;

}

@property (nonatomic,copy,readonly) NSArray * calls;                     //@synthesize calls=_calls - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,copy,readonly) NSString * displayName; 
-(id)initWithCalls:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCall:(id)arg1 ;
-(NSArray *)calls;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(BOOL)isEqualToCallGroup:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

