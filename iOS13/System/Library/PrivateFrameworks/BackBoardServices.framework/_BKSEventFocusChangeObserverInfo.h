/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface _BKSEventFocusChangeObserverInfo : NSObject <BSInvalidatable> {

	BOOL _valid;
	unsigned long long _propertyUpdateGeneration;

}

@property (assign) unsigned long long propertyUpdateGeneration;              //@synthesize propertyUpdateGeneration=_propertyUpdateGeneration - In the implementation block
@property (getter=isValid) BOOL valid;                                       //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(void)setValid:(BOOL)arg1 ;
-(unsigned long long)propertyUpdateGeneration;
-(void)setPropertyUpdateGeneration:(unsigned long long)arg1 ;
@end

