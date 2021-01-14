/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/Cards-Structs.h>
#import <Cards/CRBasicPayloadCommand.h>

@class INIntent;

@interface CRHandleIntentCommand : CRBasicPayloadCommand {

	INIntent* _intent;

}

@property (nonatomic,copy) INIntent * intent;              //@synthesize intent=_intent - In the implementation block
-(INIntent *)intent;
-(void)setIntent:(INIntent *)arg1 ;
-(id)payload;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

