/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVControlItemInteractionFactory.h>

@protocol SVControlItemInteractionFactory <NSObject>
@required
-(id)createInteractionWithControlItem:(id)arg1;

@end


@protocol SVInteractionContextFactory;
@class NSString;

@interface SVControlItemInteractionFactory : NSObject <SVControlItemInteractionFactory> {

	id<SVInteractionContextFactory> _interactionContextFactory;

}

@property (nonatomic,readonly) id<SVInteractionContextFactory> interactionContextFactory;              //@synthesize interactionContextFactory=_interactionContextFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVInteractionContextFactory>)interactionContextFactory;
-(id)initWithInteractionContextFactory:(id)arg1 ;
-(id)createInteractionWithControlItem:(id)arg1 ;
@end

