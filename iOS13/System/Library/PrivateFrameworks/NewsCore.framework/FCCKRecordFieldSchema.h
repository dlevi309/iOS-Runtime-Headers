/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(BOOL)isEncrypted;
-(id)initWithFieldName:(id)arg1 isEncrypted:(BOOL)arg2 ;
@end

