/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPContainerCoalescingToken.h>

@protocol MSPContainerCoalescingToken <NSObject>
@required
-(void)endCoalescingEdits;

@end


@protocol NSObjectNSCopying;
@class MSPContainer, NSString;

@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken> {

	MSPContainer* _container;
	id<NSObject><NSCopying> _context;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithContainerOwner:(id)arg1 context:(id)arg2 ;
-(void)endCoalescingEdits;
@end

