/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface BKSDisplayProgressIndicatorProperties : NSObject <NSSecureCoding, BSDescriptionProviding> {

	long long _style;
	CGPoint _position;

}

@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) CGPoint position;                    //@synthesize position=_position - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)progressIndicatorWithStyle:(long long)arg1 position:(CGPoint)arg2 ;
-(id)succinctDescription;
-(CGPoint)position;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_initWithStyle:(long long)arg1 position:(CGPoint)arg2 ;
-(id)succinctDescriptionBuilder;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

