/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCPPTTodayContentDescriptor : NSObject {

	unsigned long long _contentType;
	NSString* _tagID;
	NSString* _forYouConfigID;

}

@property (nonatomic,readonly) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) NSString * tagID;                            //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,readonly) NSString * forYouConfigID;                   //@synthesize forYouConfigID=_forYouConfigID - In the implementation block
+(id)descriptorWithTagID:(id)arg1 ;
+(id)descriptorWithForYouConfigID:(id)arg1 tagID:(id)arg2 ;
+(id)descriptorWithForYouConfigID:(id)arg1 ;
-(NSString *)tagID;
-(id)_initWithForYouConfigID:(id)arg1 tagID:(id)arg2 ;
-(unsigned long long)contentType;
-(id)_initWithTagID:(id)arg1 ;
-(NSString *)forYouConfigID;
@end

