/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/


@class NSMutableSet, NSString, NSSet;

@interface BNSuspensionController : NSObject {

	NSMutableSet* _suspensionReasons;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSSet * activeSuspensionReasons; 
+(void)initialize;
-(BOOL)isSuspended;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 ;
-(NSSet *)activeSuspensionReasons;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

