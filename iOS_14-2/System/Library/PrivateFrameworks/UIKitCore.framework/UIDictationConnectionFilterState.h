/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIDictationConnectionFilterState : NSObject {

	CFStringRef _transform;
	/*^block*/id _pendingDictationCommand;

}

@property (assign,nonatomic) CFStringRef transform;                 //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy) id pendingDictationCommand;              //@synthesize pendingDictationCommand=_pendingDictationCommand - In the implementation block
-(id)pendingDictationCommand;
-(void)setPendingDictationCommand:(id)arg1 ;
-(void)setTransform:(CFStringRef)arg1 ;
-(CFStringRef)transform;
@end

