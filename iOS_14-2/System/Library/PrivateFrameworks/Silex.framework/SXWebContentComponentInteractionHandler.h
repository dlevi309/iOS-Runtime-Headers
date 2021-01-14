/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithInteraction:(id)arg1 ;
-(id<SWInteraction>)interaction;
-(void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
@end

