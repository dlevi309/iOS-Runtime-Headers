/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@class NSMutableArray, NSString;

@interface UMLogMessage : NSObject {

	NSMutableArray* _publicStrings;
	NSMutableArray* _privateStrings;

}

@property (nonatomic,retain) NSMutableArray * publicStrings;               //@synthesize publicStrings=_publicStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * privateStrings;              //@synthesize privateStrings=_privateStrings - In the implementation block
@property (nonatomic,readonly) NSString * publicString; 
@property (nonatomic,readonly) NSString * privateString; 
+(id)messageWithUser:(id)arg1 privateFormat:(id)arg2 ;
+(id)messageWithTask:(id)arg1 publicFormat:(id)arg2 ;
+(void)_addUserInfoFrom:(id)arg1 toMessage:(id)arg2 ;
+(id)messageWithUser:(id)arg1 publicFormat:(id)arg2 ;
+(id)messageWithTask:(id)arg1 privateFormat:(id)arg2 ;
+(id)messageWithTask:(id)arg1 ;
+(id)messageWithPublicFormat:(id)arg1 ;
+(void)_addTaskInfoFrom:(id)arg1 toMessage:(id)arg2 ;
+(id)messageWithPrivateFormat:(id)arg1 arguments:(char*)arg2 ;
+(id)messageWithUser:(id)arg1 ;
+(id)messageWithPrivateFormat:(id)arg1 ;
+(id)messageWithPublicFormat:(id)arg1 arguments:(char*)arg2 ;
-(id)init;
-(NSMutableArray *)publicStrings;
-(NSString *)privateString;
-(id)_stringForArray:(id)arg1 ;
-(void)addPrivateFormat:(id)arg1 ;
-(void)setPrivateStrings:(NSMutableArray *)arg1 ;
-(NSString *)publicString;
-(NSMutableArray *)privateStrings;
-(void)addPublicFormat:(id)arg1 ;
-(void)setPublicStrings:(NSMutableArray *)arg1 ;
@end

