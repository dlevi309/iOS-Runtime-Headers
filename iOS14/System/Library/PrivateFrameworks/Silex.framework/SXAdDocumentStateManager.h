/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithViewport:(id)arg1 ;
-(SXViewport *)viewport;
-(void)addObserver:(id)arg1 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(NSPointerArray *)observers;
@end

