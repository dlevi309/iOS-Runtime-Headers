/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVControlInteractionFactory.h>

@protocol SVControlInteractionFactory <NSObject>
@required
-(id)createInteractionWithControl:(id)arg1 events:(unsigned long long)arg2;

@end


@protocol SVInteractionContextFactory;
@class NSString;

@interface SVControlInteractionFactory : NSObject <SVControlInteractionFactory> {

	id<SVInteractionContextFactory> _interactionContextFactory;

}

@property (nonatomic,readonly) id<SVInteractionContextFactory> interactionContextFactory;              //@synthesize interactionContextFactory=_interactionContextFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createInteractionWithControl:(id)arg1 events:(unsigned long long)arg2 ;
-(id<SVInteractionContextFactory>)interactionContextFactory;
-(id)initWithInteractionContextFactory:(id)arg1 ;
@end

