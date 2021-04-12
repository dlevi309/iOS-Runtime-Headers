/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/Cards-Structs.h>
#import <libobjc.A.dylib/CRPayloadCommand.h>

@protocol NSSecureCodingNSCopying;
@class NSDictionary, NSString;

@interface CRBasicPayloadCommand : NSObject <CRPayloadCommand> {

	id<NSSecureCoding><NSCopying> payload;
	NSDictionary* userInfo;
	unsigned long long commandDirection;

}

@property (nonatomic,retain) id<NSSecureCoding><NSCopying> payload; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)inuickp_intrinsicInteractiveBehavior;
-(BOOL)handleForCardViewController:(id)arg1 cardViewControllerDelegate:(id)arg2 ;
-(BOOL)handleForCardViewController:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setPayload:(id<NSSecureCoding><NSCopying>)arg1 ;
-(NSDictionary *)userInfo;
-(id<NSSecureCoding><NSCopying>)payload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1 ;
@end

