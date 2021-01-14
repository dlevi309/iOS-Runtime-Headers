/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
*/


@class NSString;

@interface _TVContentRating : NSObject {

	long long _ratingSystem;
	NSString* _ratingLabel;
	unsigned long long _rank;
	NSString* _ratingDescription;

}

@property (nonatomic,readonly) long long ratingSystemKind; 
@property (nonatomic,readonly) long long ratingSystem;                                     //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * ratingSystemString; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,copy,readonly) NSString * ratingLabel;                                //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,readonly) unsigned long long rank;                                    //@synthesize rank=_rank - In the implementation block
@property (nonatomic,copy,readonly) NSString * ratingDescription;                          //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
+(id)new;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)stringRepresentation;
-(id)init;
-(long long)ratingSystem;
-(NSString *)ratingDescription;
-(id)description;
-(BOOL)isExplicitContent;
-(unsigned long long)hash;
-(unsigned long long)rank;
-(NSString *)ratingLabel;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRatingSystemString:(id)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4 ;
-(id)initWithRatingSystem:(long long)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4 ;
-(id)initWithRatingSystem:(long long)arg1 explicitContent:(BOOL)arg2 ;
-(long long)ratingSystemKind;
-(NSString *)ratingSystemString;
@end

