/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSString;

@interface _PUDisabledUserInteractionToken : NSObject {

	NSString* _identifier;
	long long _reason;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long reason;                 //@synthesize reason=_reason - In the implementation block
-(id)description;
-(long long)reason;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setReason:(long long)arg1 ;
@end

