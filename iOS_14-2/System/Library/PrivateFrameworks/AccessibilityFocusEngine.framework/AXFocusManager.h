/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityFocusEngine.framework/AccessibilityFocusEngine
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, AXElement;

@interface AXFocusManager : NSObject {

	int _pidForSuccessfulTypeaheadMovement;
	NSString* _typeaheadString;
	NSObject*<OS_dispatch_queue> _movementQueue;

}

@property (nonatomic,retain) NSString * typeaheadString;                              //@synthesize typeaheadString=_typeaheadString - In the implementation block
@property (assign,nonatomic) int pidForSuccessfulTypeaheadMovement;                   //@synthesize pidForSuccessfulTypeaheadMovement=_pidForSuccessfulTypeaheadMovement - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> movementQueue;              //@synthesize movementQueue=_movementQueue - In the implementation block
@property (nonatomic,readonly) AXElement * currentApplication; 
-(id)init;
-(AXElement *)currentApplication;
-(void)setMovementQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_currentApplications;
-(BOOL)_focusOnApplicationWithPID:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)movementQueue;
-(NSString *)typeaheadString;
-(void)moveFocusWithHeading:(unsigned long long)arg1 queryString:(id)arg2 ;
-(id)currentElement;
-(void)setTypeaheadString:(NSString *)arg1 ;
-(void)setPidForSuccessfulTypeaheadMovement:(int)arg1 ;
-(void)_moveToElementWithHeading:(unsigned long long)arg1 queryString:(id)arg2 ;
-(BOOL)_moveFocusWithHeading:(unsigned long long)arg1 shouldWrap:(BOOL)arg2 ;
-(void)_verifyPIDForTypeahead;
-(int)pidForSuccessfulTypeaheadMovement;
-(unsigned long long)_indexOfTypeaheadPIDInApplications:(id)arg1 ;
-(BOOL)_moveFocusInApplication:(id)arg1 withHeading:(unsigned long long)arg2 queryString:(id)arg3 ;
-(BOOL)_recursiveMoveFocusInApplication:(id)arg1 withHeading:(unsigned long long)arg2 queryString:(id)arg3 ;
-(BOOL)_recursiveMoveFocusInApplication:(id)arg1 withHeading:(unsigned long long)arg2 ;
-(BOOL)_moveFocusInRemoteElement:(id)arg1 withHeading:(unsigned long long)arg2 ;
-(void)_handleFailedFocusMovementWithHeading:(unsigned long long)arg1 ;
-(id)_moveApplicationFocusInDirection:(long long)arg1 ;
-(void)moveFocusWithHeading:(unsigned long long)arg1 ;
-(void)moveFocusInsideForward:(BOOL)arg1 ;
-(void)focusOnApplicationForTypeahead;
@end

