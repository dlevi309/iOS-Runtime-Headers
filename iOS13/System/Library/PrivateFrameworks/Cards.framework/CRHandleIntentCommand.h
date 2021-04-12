/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/Cards-Structs.h>
#import <Cards/CRBasicPayloadCommand.h>

@class INIntent;

@interface CRHandleIntentCommand : CRBasicPayloadCommand {

	INIntent* _intent;

}

@property (nonatomic,copy) INIntent * intent;              //@synthesize intent=_intent - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)payload;
-(INIntent *)intent;
-(void)setIntent:(INIntent *)arg1 ;
@end

