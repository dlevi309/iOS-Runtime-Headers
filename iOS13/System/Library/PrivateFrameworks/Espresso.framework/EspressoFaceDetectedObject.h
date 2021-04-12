/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ExternalDetectedObject.h>

@class NSString;

@interface EspressoFaceDetectedObject : NSObject <ExternalDetectedObject> {

	float confidence;
	long long objectType;
	CGPoint center;
	CGRect bounds;

}

@property (assign) float confidence; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long objectType; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint center; 
-(float)confidence;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(long long)objectType;
-(void)setConfidence:(float)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4 ;
@end

