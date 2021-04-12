/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCCKRecordFieldSchema : NSObject {

	BOOL _isEncrypted;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isEncrypted;                  //@synthesize isEncrypted=_isEncrypted - In the implementation block
+(id)fieldWithName:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(id)init;
-(id)initWithFieldName:(id)arg1 isEncrypted:(BOOL)arg2 ;
-(NSString *)name;
-(BOOL)isEncrypted;
@end

