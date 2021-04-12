/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVInteraction.h>

@protocol SVInteraction <NSObject>
@property (setter=uponInteraction:,nonatomic,copy) id interactionBlock; 
@required
-(void)uponInteraction:(/*^block*/id)arg1;
-(id)interactionBlock;

@end


@class NSString;

@interface SVInteraction : NSObject <SVInteraction> {

	/*^block*/id interactionBlock;
	/*^block*/id _contextProvider;

}

@property (nonatomic,readonly) id contextProvider;                                   //@synthesize contextProvider=_contextProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=uponInteraction:,nonatomic,copy) id interactionBlock; 
-(void)performWithObject:(id)arg1 ;
-(void)uponInteraction:(/*^block*/id)arg1 ;
-(id)initWithContextProvider:(/*^block*/id)arg1 ;
-(id)contextProvider;
-(id)interactionBlock;
@end

