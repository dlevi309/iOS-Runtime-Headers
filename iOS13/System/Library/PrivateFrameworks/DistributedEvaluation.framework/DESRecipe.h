/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSString;

@interface DESRecipe : NSObject <NSCopying> {

	NSDictionary* _recipeUserInfo;
	NSArray* _attachments;
	NSDictionary* _parametersUsed;
	NSString* _recipeId;
	NSString* _recipeType;

}

@property (nonatomic,copy) NSArray * attachments;                                            //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parametersUsed;                           //@synthesize parametersUsed=_parametersUsed - In the implementation block
@property (nonatomic,copy) NSString * recipeId;                                              //@synthesize recipeId=_recipeId - In the implementation block
@property (nonatomic,copy) NSString * recipeType;                                            //@synthesize recipeType=_recipeType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * secureAggregationRecipeInfo; 
@property (nonatomic,copy,readonly) NSDictionary * recipeUserInfo;                           //@synthesize recipeUserInfo=_recipeUserInfo - In the implementation block
@property (nonatomic,readonly) BOOL supportsSecureAggregation; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)recipeId;
-(void)setRecipeId:(NSString *)arg1 ;
-(id)_initWithRecipeUserInfo:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 ;
-(NSString *)recipeType;
-(BOOL)supportsSecureAggregation;
-(NSDictionary *)secureAggregationRecipeInfo;
-(id)_inithWithContentsOfFile:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 error:(id*)arg4 ;
-(id)_initWithRecipeResponse:(id)arg1 recipeId:(id)arg2 recipeType:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)recipeUserInfo;
-(NSDictionary *)parametersUsed;
-(void)setRecipeType:(NSString *)arg1 ;
@end

