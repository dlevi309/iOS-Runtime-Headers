/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)ratingLabel;
-(NSString *)stringRepresentation;
-(unsigned long long)rank;
-(id)initWithStringRepresentation:(id)arg1 ;
-(BOOL)isExplicitContent;
-(NSString *)ratingDescription;
-(long long)ratingSystem;
-(id)initWithRatingSystem:(long long)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4 ;
-(id)initWithRatingSystemString:(id)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4 ;
-(id)initWithRatingSystem:(long long)arg1 explicitContent:(BOOL)arg2 ;
-(long long)ratingSystemKind;
-(NSString *)ratingSystemString;
@end

