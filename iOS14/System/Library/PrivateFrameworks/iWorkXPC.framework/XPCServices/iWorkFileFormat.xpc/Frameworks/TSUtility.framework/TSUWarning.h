/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSString, NSDictionary;

@interface TSUWarning : NSObject {

	long long _kind;
	NSString* _message;
	NSString* _detailMessage;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) long long kind;                    //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) long long severity; 
@property (nonatomic,readonly) NSString * message;                //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * detailMessage;              //@synthesize detailMessage=_detailMessage - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;               //@synthesize userInfo=_userInfo - In the implementation block
+(id)warningWithMessage:(id)arg1 affectedObjects:(id)arg2 ;
+(id)warningWithMessage:(id)arg1 ;
+(id)warningWithMessage:(id)arg1 affectedObject:(id)arg2 ;
+(id)warningWithKind:(long long)arg1 message:(id)arg2 ;
+(id)fontWarningWithMessage:(id)arg1 fontNames:(id)arg2 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)message;
-(NSDictionary *)userInfo;
-(long long)kind;
-(long long)severity;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithKind:(long long)arg1 message:(id)arg2 ;
-(void)setAffectedObjects:(id)arg1 ;
-(NSString *)detailMessage;
-(id)affectedObjects;
-(void)addAffectedObjects:(id)arg1 ;
-(BOOL)isFontWarning;
-(void)setDetailMessage:(NSString *)arg1 ;
@end

