/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/Cards-Structs.h>
#import <Cards/CRBasicPayloadCommand.h>
#import <libobjc.A.dylib/CRPayloadCommand.h>

@class SFPunchout, NSString, NSDictionary;

@interface CRPunchoutCommand : CRBasicPayloadCommand <CRPayloadCommand> {

	SFPunchout* _punchout;

}

@property (nonatomic,retain) SFPunchout * punchout;                              //@synthesize punchout=_punchout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (nonatomic,retain) id<NSSecureCoding><NSCopying> payload; 
-(BOOL)handleForCardViewController:(id)arg1 cardViewControllerDelegate:(id)arg2 ;
-(unsigned long long)inuickp_intrinsicInteractiveBehavior;
-(id)crk_backingPunchout;
-(BOOL)handleForCardViewController:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSSecureCoding><NSCopying>)payload;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
@end

