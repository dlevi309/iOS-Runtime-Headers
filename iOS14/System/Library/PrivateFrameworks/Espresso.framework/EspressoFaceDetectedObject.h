/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign) long long objectType; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint center; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)confidence;
-(CGRect)bounds;
-(CGPoint)center;
-(long long)objectType;
-(void)setObjectType:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4 ;
@end

