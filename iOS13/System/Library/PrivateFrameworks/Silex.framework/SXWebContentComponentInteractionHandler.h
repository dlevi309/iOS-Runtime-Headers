/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionHandler.h>

@protocol SWInteraction;
@class NSString;

@interface SXWebContentComponentInteractionHandler : NSObject <SXComponentInteractionHandler> {

	id<SWInteraction> _interaction;

}

@property (nonatomic,readonly) id<SWInteraction> interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWInteraction>)interaction;
-(id)initWithInteraction:(id)arg1 ;
-(void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
@end

