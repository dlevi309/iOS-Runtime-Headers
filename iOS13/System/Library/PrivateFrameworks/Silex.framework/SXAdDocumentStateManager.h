/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXAdDocumentStateManager.h>

@protocol SXAdDocumentStateManager <NSObject>
@required
-(void)addObserver:(id)arg1;

@end


@class SXViewport, NSPointerArray, NSString;

@interface SXAdDocumentStateManager : NSObject <SXViewportChangeListener, SXAdDocumentStateManager> {

	SXViewport* _viewport;
	NSPointerArray* _observers;

}

@property (nonatomic,readonly) SXViewport * viewport;                   //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSPointerArray * observers;              //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(SXViewport *)viewport;
-(NSPointerArray *)observers;
-(id)initWithViewport:(id)arg1 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
@end

