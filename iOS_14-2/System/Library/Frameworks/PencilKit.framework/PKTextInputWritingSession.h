/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSNumber, PKTextInputElement;

@interface PKTextInputWritingSession : NSObject {

	BOOL _isInvalidated;
	BOOL _didSuppressGesturesOverReservedSpace;
	NSNumber* _sessionIdentifier;
	PKTextInputElement* _currentTargetElement;
	double _beginTimestamp;

}

@property (nonatomic,readonly) NSNumber * sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,retain) PKTextInputElement * currentTargetElement;                //@synthesize currentTargetElement=_currentTargetElement - In the implementation block
@property (nonatomic,readonly) BOOL didSuppressGesturesOverReservedSpace;              //@synthesize didSuppressGesturesOverReservedSpace=_didSuppressGesturesOverReservedSpace - In the implementation block
@property (nonatomic,readonly) double beginTimestamp;                                  //@synthesize beginTimestamp=_beginTimestamp - In the implementation block
-(id)init;
-(NSNumber *)sessionIdentifier;
-(id)description;
-(void)invalidate;
-(double)beginTimestamp;
-(void)dealloc;
-(void)setCurrentTargetElement:(PKTextInputElement *)arg1 ;
-(void)setDidSuppressGesturesOverReservedSpace;
-(PKTextInputElement *)currentTargetElement;
-(BOOL)didSuppressGesturesOverReservedSpace;
@end

