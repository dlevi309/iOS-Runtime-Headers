/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIDSMessage.h>

@class NSString, NSDictionary;

@interface CRKYoIDSMessage : NSObject <CRKIDSMessage> {

	NSString* _message;

}

@property (nonatomic,copy,readonly) NSString * message;                          //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long messageType; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(long long)messageType;
-(NSString *)message;
-(id)initWithMessage:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
@end

