/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PCDisplayContext : NSObject <NSSecureCoding> {

	NSString* _localizedPrimaryAltText;
	NSString* _localizedSecondaryAltText;
	long long _interactionBehavior;
	long long _interactionDirection;

}

@property (nonatomic,copy) NSString * localizedPrimaryAltText;                //@synthesize localizedPrimaryAltText=_localizedPrimaryAltText - In the implementation block
@property (nonatomic,copy) NSString * localizedSecondaryAltText;              //@synthesize localizedSecondaryAltText=_localizedSecondaryAltText - In the implementation block
@property (assign,nonatomic) long long interactionBehavior;                   //@synthesize interactionBehavior=_interactionBehavior - In the implementation block
@property (assign,nonatomic) long long interactionDirection;                  //@synthesize interactionDirection=_interactionDirection - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)interactionDirection;
-(void)setInteractionDirection:(long long)arg1 ;
-(void)setLocalizedSecondaryAltText:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)interactionBehavior;
-(void)setInteractionBehavior:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)localizedPrimaryAltText;
-(NSString *)localizedSecondaryAltText;
-(void)setLocalizedPrimaryAltText:(NSString *)arg1 ;
@end

