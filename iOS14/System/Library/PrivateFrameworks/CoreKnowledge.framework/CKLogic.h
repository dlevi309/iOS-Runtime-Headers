/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/


@class NSString;

@interface CKLogic : NSObject {

	 body;
	 negatedBody;

}

@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * identifier; 
+(id)ifExistsLink:(id)arg1 to:(id)arg2 ;
+(id)ifNotExistsLink:(id)arg1 to:(id)arg2 ;
-(id)and:(id)arg1 ;
-(id)init;
-(id)andExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)andNotExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(long long)hash;
-(NSString *)identifier;
@end

