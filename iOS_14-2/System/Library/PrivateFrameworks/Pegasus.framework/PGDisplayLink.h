/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class CADisplayLink, NSString;

@interface PGDisplayLink : NSObject <BSInvalidatable> {

	CADisplayLink* _link;
	BOOL _invalidated;
	id _owner;
	/*^block*/id _linkFired;
	unsigned long long _preferredFramesPerSecond;

}

@property (nonatomic,__weak,readonly) id owner;                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy,readonly) id linkFired;                                      //@synthesize linkFired=_linkFired - In the implementation block
@property (assign,nonatomic) unsigned long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)owner;
-(id)linkFired;
-(unsigned long long)preferredFramesPerSecond;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(unsigned long long)arg1 ;
-(void)_linkFired:(id)arg1 ;
-(id)initWithOwner:(id)arg1 linkFired:(/*^block*/id)arg2 ;
@end

