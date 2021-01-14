/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/Cards-Structs.h>
#import <Cards/CRBasicPayloadCommand.h>
#import <libobjc.A.dylib/CRPayloadCommand.h>

@protocol CRCard;
@class NSDictionary, NSString;

@interface CRNextCardCommand : CRBasicPayloadCommand <CRPayloadCommand> {

	id<CRCard> _nextCard;

}

@property (nonatomic,retain) id<CRCard> nextCard;                                //@synthesize nextCard=_nextCard - In the implementation block
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
-(void)setNextCard:(id<CRCard>)arg1 ;
-(id<NSSecureCoding><NSCopying>)payload;
-(id<CRCard>)nextCard;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

