/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
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
+(id)warningWithMessage:(id)arg1 ;
+(id)warningWithMessage:(id)arg1 affectedObjects:(id)arg2 ;
+(id)warningWithMessage:(id)arg1 affectedObject:(id)arg2 ;
+(id)warningWithKind:(long long)arg1 message:(id)arg2 ;
+(id)fontWarningWithMessage:(id)arg1 fontNames:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(long long)kind;
-(NSString *)message;
-(long long)severity;
-(id)initWithKind:(long long)arg1 message:(id)arg2 ;
-(void)setAffectedObjects:(id)arg1 ;
-(NSString *)detailMessage;
-(id)affectedObjects;
-(void)addAffectedObjects:(id)arg1 ;
-(BOOL)isFontWarning;
-(void)setDetailMessage:(NSString *)arg1 ;
@end

