/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKClockHardwareInput.h>

@protocol NTKCrownInputHandlerDelegate;
@class NSString;

@interface NTKCrownInputHandler : NSObject <NTKClockHardwareInput> {

	BOOL _useWideIdleCheck;
	id<NTKCrownInputHandlerDelegate> _delegate;
	double _progress;

}

@property (assign,nonatomic,__weak) id<NTKCrownInputHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useWideIdleCheck;                                         //@synthesize useWideIdleCheck=_useWideIdleCheck - In the implementation block
@property (assign,nonatomic) double offsetPerRevolution; 
@property (assign,nonatomic) double progress;                                               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)progress;
-(id)init;
-(id<NTKCrownInputHandlerDelegate>)delegate;
-(void)setDelegate:(id<NTKCrownInputHandlerDelegate>)arg1 ;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(void)setUseWideIdleCheck:(BOOL)arg1 ;
-(void)setOffsetPerRevolution:(double)arg1 ;
-(double)offsetPerRevolution;
-(void)generateMajorDetents;
-(void)generateMinorDetents;
-(BOOL)useWideIdleCheck;
@end

