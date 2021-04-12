/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/AltAspect.h>

@class NSString;

@interface OrientationInfo : NSObject <AltAspect> {

	BOOL _isRotated;
	unsigned _inputID;
	double _altAspect;

}

@property (assign,nonatomic) double altAspect;                      //@synthesize altAspect=_altAspect - In the implementation block
@property (assign,nonatomic) BOOL isRotated;                        //@synthesize isRotated=_isRotated - In the implementation block
@property (assign,nonatomic) unsigned inputID;                      //@synthesize inputID=_inputID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isRotated;
-(unsigned)inputID;
-(void)setInputID:(unsigned)arg1 ;
-(void)setIsRotated:(BOOL)arg1 ;
-(double)altAspect;
-(void)setAltAspect:(double)arg1 ;
@end

