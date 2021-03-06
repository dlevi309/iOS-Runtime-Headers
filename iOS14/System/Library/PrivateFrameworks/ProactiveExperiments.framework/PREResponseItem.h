/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PREResponseItem : NSObject <NSSecureCoding> {

	NSNumber* _categoryId;
	NSNumber* _modelId;
	NSNumber* _responseClassId;
	NSNumber* _replySubgroupId;
	NSNumber* _replyTextId;
	NSString* _replyText;
	NSString* _language;
	NSNumber* _isCustomResponse;

}

@property (nonatomic,readonly) NSNumber * categoryId;                    //@synthesize categoryId=_categoryId - In the implementation block
@property (nonatomic,readonly) NSNumber * modelId;                       //@synthesize modelId=_modelId - In the implementation block
@property (nonatomic,readonly) NSNumber * responseClassId;               //@synthesize responseClassId=_responseClassId - In the implementation block
@property (nonatomic,readonly) NSNumber * replySubgroupId;               //@synthesize replySubgroupId=_replySubgroupId - In the implementation block
@property (nonatomic,readonly) NSNumber * replyTextId;                   //@synthesize replyTextId=_replyTextId - In the implementation block
@property (nonatomic,readonly) NSString * replyText;                     //@synthesize replyText=_replyText - In the implementation block
@property (nonatomic,readonly) NSString * language;                      //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSNumber * isCustomResponse;              //@synthesize isCustomResponse=_isCustomResponse - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseItemArrayFromResponseKitArray:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)replyText;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)modelId;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)replyTextId;
-(NSNumber *)categoryId;
-(NSNumber *)isCustomResponse;
-(NSNumber *)responseClassId;
-(id)initWithCategoryId:(id)arg1 modelId:(id)arg2 responseClassId:(id)arg3 replySubgroupId:(id)arg4 replyTextId:(id)arg5 replyText:(id)arg6 language:(id)arg7 isCustomResponse:(id)arg8 ;
-(BOOL)isEqualToResponseItem:(id)arg1 ;
-(NSNumber *)replySubgroupId;
@end

